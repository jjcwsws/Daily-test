#include <iostream>

using namespace std;

long long a, b, n; 
int main() 
{
	cin >> a >> b >> n;
	long long s = 5 * a + b * 2;
	long long s1 = n % s; 
	long long s2 = n / s; 

	if (s1 <= 5 * a) 
		cout << s2 * 7 + (s1 + a - 1) / a;
	else 
		cout << s2 * 7 + 5 + (s1 - 5 * a + b - 1) / b;

	return 0;
}
#include <vector>

class Solution {
    vector<int> calc_z(string s) {
        int n = s.length();
        vector<int> z(n);
        int box_l = 0, box_r = 0;
        for (int i = 1; i < n; i++) {
            if (i <= box_r) {
                z[i] = min(z[i - box_l], box_r - i + 1);
            }
            while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
                box_l = i;
                box_r = i + z[i];
                z[i]++;
            }
        }
        return z;
    }

    int jump(vector<int>& max_jumps) 
    {
        int ans = 0;
        int cur_r = 0; 
        int nxt_r = 0;
        for (int i = 0; i < max_jumps.size(); i++) {
            nxt_r = max(nxt_r, i + max_jumps[i]);
            if (i == cur_r) { 
                if (i == nxt_r) {
                    return -1;
                }
                cur_r = nxt_r; 
                ans++;
            }
        }
        return ans;
    }

public:
    int minValidStrings(vector<string>& words, string target) {
        int n = target.length();
        vector<int> max_jumps(n);
        for (auto& word : words) {
            vector<int> z = calc_z(word + "#" + target);
            int m = word.length() + 1;
            for (int i = 0; i < n; i++) {
                max_jumps[i] = max(max_jumps[i], z[m + i]);
            }
        }
        return jump(max_jumps);
    }
};

class Solution {
public:
    string largestGoodInteger(string num) {
        char mx = 0;
        int cnt = 1;
        for (int i = 1; i < num.length(); i++) {
            char d = num[i];
            if (d != num[i - 1]) {
                cnt = 1;
                continue;
            }
            cnt++;
            if (cnt == 3 && d > mx) {
                mx = d;
            }
        }
        return mx ? string(3, mx) : "";
    }
};


#include <iostream>
#include <vector>
#include <queue>

using namespace std;


//using namespace std;
//int f[40];
//int a[40];
//int ans = 100000, tmp;
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 1; i <= min(n, 30); i++)
//        cin >> a[i];
//    for (int i = 1; i <= 1000000; i++) {
//        f[1] = f[2] = i;
//        tmp = 0;
//        tmp += ((f[1] != a[1]) + (f[2] != a[2]) + max(n - 30, 0));
//        for (int j = 3; j <= min(30, n); j++) {
//            f[j] = f[j - 1] + f[j - 2];
//            tmp += (f[j] != a[j]);
//        }
//        ans = min(ans, tmp);
//    }
//    cout << ans;
//    return 0;
//}

//class Solution {
//public:
//    int eatenApples(vector<int>& apples, vector<int>& days) {
//        int ans = 0, i = 0;
//        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
//        for (; i < apples.size(); i++) {
//            while (!pq.empty() && pq.top().first == i) { // 已腐烂
//                pq.pop();
//            }
//            if (apples[i]) {
//                pq.emplace(i + days[i], apples[i]);
//            }
//            if (!pq.empty()) {
//                // 吃一个最早腐烂的苹果
//                ans++;
//                auto [rotten_day, num] = pq.top();
//                pq.pop();
//                if (num > 1) {
//                    pq.emplace(rotten_day, num - 1);
//                }
//            }
//        }
//
//        while (true) {
//            while (!pq.empty() && pq.top().first <= i) { // 已腐烂
//                pq.pop();
//            }
//            if (pq.empty()) {
//                return ans;
//            }
//            auto [rotten_day, num] = pq.top();
//            pq.pop();
//            int k = min(num, rotten_day - i);
//            ans += k;
//            i += k;
//        }
//    }
//};

#include <map>
#include <climits>

class Solution
{
    map<pair<pair<int, int>, pair<int, int>>, int> memo;
public:
    int dfs(pair<int, int> m, pair<int, int>n, vector<int>& horizontalCut, vector<int>& verticalCut)
    {
        if (m.second - m.first == 1 && n.second - n.first == 1)
            return 0;

        if (memo.count({ m, n }))
            return memo[{m, n}];

        int ret = INT_MAX;

        for (int i = m.first; i < m.second - 1; i++)
            ret = min(ret, horizontalCut[i] +
                dfs({ m.first, i + 1 }, n, horizontalCut, verticalCut) +
                dfs({ i + 1, m.second }, n, horizontalCut, verticalCut));

        for (int j = n.first; j < n.second - 1; j++)
            ret = min(ret, verticalCut[j] +
                dfs(m, { n.first, j + 1 }, horizontalCut, verticalCut) +
                dfs(m, { j + 1, n.second }, horizontalCut, verticalCut));

        memo[{m, n}] = ret;
        return ret;

    }

    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut)
    {
        return dfs({ 0, m }, { 0, n }, horizontalCut, verticalCut);
    }
};

int main()
{
    Solution s;
    cout << s.minimumCost(3, 2, { 1,3 }, { 4 });


    return 0;
}
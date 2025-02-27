#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution
{
    map<pair<int, int>, int> memo;
public:
    int dfs(vector<int>& cuts, int l, int r, int left, int right) // 从 l-r 切割 cuts(left, right) 的最小成本
    {
        if (left + 1 >= right)
            return 0;

        if (memo.count({ left, right }))
            return memo[{left, right}];

        int ret = INT_MAX;
        for (int i = left + 1; i < right; i++)
            ret = min(ret, dfs(cuts, l, cuts[i], left, i)
                + dfs(cuts, cuts[i], r, i, right)
                + r - l);

        memo[{left, right}] = ret;
        return ret;
    }

    int minCost(int n, vector<int>& cuts)
    {
        sort(cuts.begin(), cuts.end());
        int ret = INT_MAX;
        for (int i = 0; i < cuts.size(); i++)
            ret = min(ret, dfs(cuts, 0, cuts[i], -1, i)
                + dfs(cuts, cuts[i], n, i, cuts.size())
                + n);

        return ret;
    }
};
int main()
{
    Solution s;

    return 0;
}
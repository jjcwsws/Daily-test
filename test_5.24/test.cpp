class Solution {
public:
    int maximumPoints(vector<vector<int>>& edges, vector<int>& coins, int k) {
        vector<vector<int>> g(coins.size());
        for (auto& e : edges) {
            int x = e[0], y = e[1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        auto dfs = [&](this auto&& dfs, int x, int fa) -> array<int, 14> {
            array<int, 14> s{};
            for (int y : g[x]) {
                if (y == fa) continue;
                auto fy = dfs(y, x);
                for (int j = 0; j < 14; j++) {
                    s[j] += fy[j];
                }
            }
            for (int j = 0; j < 13; j++) {
                s[j] = max((coins[x] >> j) - k + s[j], (coins[x] >> (j + 1)) + s[j + 1]);
            }
            s[13] = max(s[13] + (coins[x] >> 13) - k, 0);
            return s;
            };
        return dfs(0, -1)[0];
    }
};

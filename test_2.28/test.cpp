#include <iostream>
#include <vector>
using namespace std;


class Solution
{
    int ret = 0;
public:
    // 返回值 <节点数目, 是否好节点>
    pair<bool, int> goodNodes(vector<vector<int>>& nodes, int root, int father)
    {
        if (nodes[root].size() == 0)
            return { true, 1 };

        bool flag = true;
        int prev = -1, count = 0;
        for (auto child : nodes[root])
        {
            if (child == father)
                continue;

            pair<bool, int> p = goodNodes(nodes, child, root);
            if (prev == -1)
                prev = p.second;
            else
                flag = flag && (prev == p.second);

            flag = flag && p.first;
            count += p.second;
        }

        if (flag)
            ret++;

        return { flag, count + 1 };
    }

    int countGoodNodes(vector<vector<int>>& edges)
    {
        int n = edges.size();
        vector<vector<int>> nodes(n);
        // 下标i表示第i个节点，nodes[i]表示该元素的子节点

        for (auto& edge : edges)
        {
            nodes[edge[0]].push_back(edge[1]);
            nodes[edge[1]].push_back(edge[0]);
        }

        goodNodes(nodes, 0, -1);
        return ret;
    }
};


class Solution {
public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> g(n);
        for (auto& e : edges) {
            int x = e[0], y = e[1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        int ans = 0;
        auto dfs = [&](auto&& dfs, int x, int fa) -> int {
            int size = 1, sz0 = 0;
            bool ok = true;
            for (int y : g[x]) {
                if (y == fa) {
                    continue; // 不能递归到父节点
                }
                int sz = dfs(dfs, y, x);
                if (sz0 == 0) {
                    sz0 = sz; // 记录第一个儿子子树的大小
                }
                else if (sz != sz0) { // 存在大小不一样的儿子子树
                    ok = false; // 注意不能 break，其他子树 y 仍然要递归
                }
                size += sz;
            }
            ans += ok;
            return size;
            };
        dfs(dfs, 0, -1);
        return ans;
    }
};

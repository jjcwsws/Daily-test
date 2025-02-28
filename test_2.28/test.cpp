#include <iostream>
#include <vector>
using namespace std;


class Solution
{
    int ret = 0;
public:
    // ����ֵ <�ڵ���Ŀ, �Ƿ�ýڵ�>
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
        // �±�i��ʾ��i���ڵ㣬nodes[i]��ʾ��Ԫ�ص��ӽڵ�

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
                    continue; // ���ܵݹ鵽���ڵ�
                }
                int sz = dfs(dfs, y, x);
                if (sz0 == 0) {
                    sz0 = sz; // ��¼��һ�����������Ĵ�С
                }
                else if (sz != sz0) { // ���ڴ�С��һ���Ķ�������
                    ok = false; // ע�ⲻ�� break���������� y ��ȻҪ�ݹ�
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

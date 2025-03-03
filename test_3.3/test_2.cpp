#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries)
    {
        vector<int> dist(n, 0);
        vector<int> parent(n, 0);
        vector<vector<int>> link(n); // 入边表
        for (int i = 1; i < n; i++)
        {
            dist[i] = dist[i - 1] + 1;
            parent[i] = i - 1;
            link[i].push_back(i - 1);
        }

        int len = queries.size();
        vector<int> ret(len);

        for (int i = 0; i < len; i++)
        {
            link[queries[i][1]].push_back(queries[i][0]);

            if (dist[queries[i][1]] > dist[queries[i][0]] + 1)
            {
                parent[queries[i][1]] = queries[i][0];
                dist[queries[i][1]] = dist[queries[i][0]] + 1;
            }

            for (int j = queries[i][1] + 1; j < n; j++)
            {
                for (auto from : link[j])
                {
                    if (dist[from] + 1 < dist[j])
                    {
                        parent[j] = from;
                        dist[j] = dist[from] + 1;
                    }
                }
            }

            ret[i] = dist[n - 1];
        }

        return ret;
    }
};

class Solution
{
private:
    vector<int> ufs;
    int count;

    int getRoot(int root)
    {
        while (ufs[root] >= 0)
            root = ufs[root];

        return root;
    }

    bool inSet(int root1, int root2)
    {
        return getRoot(root1) == getRoot(root2);
    }

public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries)
    {
        ufs.resize(n - 1, -1);
        count = n - 1; // 并查集集合个数(路径条数)

        int len = queries.size();
        vector<int> ret(len);

        for (int i = 0; i < len; i++)
        {
            int start = queries[i][0];
            int end = queries[i][1];

            if (!inSet(start, end - 1))
            {
                int j = start + 1;
                while (j < end)
                {
                    int tmp = ufs[j];
                    ufs[j] = start;

                    if (tmp < 0)
                    {
                        j += -tmp;
                        count--;
                    }
                    else
                    {
                        j++;
                    }
                }
            }

            ufs[start] = start - end;
            ret[i] = count;
        }

        return ret;
    }
};

#include <algorithm>

class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> fa(n - 1);
        iota(fa.begin(), fa.end(), 0);

        // 非递归并查集
        auto find = [&](int x) -> int {
            int rt = x;
            while (fa[rt] != rt) {
                rt = fa[rt];
            }
            while (fa[x] != rt) {
                int tmp = fa[x];
                fa[x] = rt;
                x = tmp;
            }
            return rt;
            };

        vector<int> ans(queries.size());
        int cnt = n - 1; // 并查集连通块个数
        for (int qi = 0; qi < queries.size(); qi++) {
            int l = queries[qi][0], r = queries[qi][1] - 1;
            int fr = find(r);
            for (int i = find(l); i < r; i = find(i + 1)) {
                fa[i] = fr;
                cnt--;
            }
            ans[qi] = cnt;
        }
        return ans;
    }
};

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
    int n;
    long long need_stus;
    vector<int> buy;
    unordered_map<int, int> memo;

public:
    int dfs(vector<int>& price, vector<vector<int>>& special, vector<int>& needs, long long statu)
    {
        int ret = INT_MAX;

        long long mv = 1;
        long long buy_stus = 0;
        for (int i = 0; i < n; i++)
        {
            buy_stus += buy[i] * mv;
            mv *= 100;
        }

        if (buy_stus == need_stus)
            return 0;

        if (memo.count(buy_stus))
            return memo[buy_stus];

        mv = 1;
        for (int i = 0; i < n; i++)
        {
            if (buy[i] < needs[i])
            {
                buy[i]++;
                ret = min(ret, dfs(price, special, needs, statu + mv) + price[i]);
                buy[i]--;
            }
            mv *= 100;
        }

        for (auto& gift : special)
        {
            bool flag = false;
            for (int i = 0; i < n; i++)
            {
                if (buy[i] + gift[i] > needs[i])
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
                continue;

            long long mv = 1;
            long long st = statu;
            for (int i = 0; i < n; i++)
            {
                buy[i] += gift[i];
                st += mv * gift[i];
                mv *= 100;
            }

            ret = min(ret, dfs(price, special, needs, st) + gift[n]);

            for (int i = 0; i < n; i++)
                buy[i] -= gift[i];
        }

        memo[buy_stus] = ret;
        return ret;
    }

    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs)
    {
        n = price.size();
        buy.resize(n, 0);

        long long mv = 1;
        for (int i = 0; i < n; i++)
        {
            need_stus += needs[i] * mv;
            mv *= 100;
        }

        return dfs(price, special, needs, 0);
    }
};
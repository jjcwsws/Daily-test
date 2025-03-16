#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution 
{
    const int MOD = 1e9 + 7;
public:
    int waysToStep(int n)
    {
        vector<int> dp(4, 0);

        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            dp[i % 4] = (((dp[(i + 1) % 4] % MOD)
                + (dp[(i + 2) % 4] % MOD)) % MOD
                + (dp[(i + 3) % 4] % MOD)) % MOD;
        }

        return dp[n % 4];
    }
};


class Solution 
{
public:
    string longestPalindrome(string s) 
    {
        int n = s.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));

        string ret;
        ret = s[0];
        for (int i = n - 1; i >= 0; i--)
        {
            dp[i][i] = true;
            for (int j = i + 1; j < n; j++)
            {
                if (i + 1 != j)
                    dp[i][j] = dp[i + 1][j - 1] && s[i] == s[j];
                else
                    dp[i][j] = s[i] == s[j];

                if (dp[i][j] && j - i + 1 > ret.size())
                    ret = s.substr(i, j - i + 1);
            }
        }

        return ret;
    }
};


class Solution {
public:
    long long maxSpending(vector<vector<int>>& values)
    {
        int m = values.size(), n = values[0].size();
        vector<int> a;
        a.reserve(m * n);

        for (auto& row : values)
            a.insert(a.end(), row.begin(), row.end());

        sort(a.begin(), a.end());

        long long ans = 0;
        for (int i = 0; i < a.size(); i++)
            ans += (long long)a[i] * (i + 1);

        return ans;
    }
};
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution 
{
private:
    vector<vector<int>> nums;
    map<pair<int, int>, int> memo;
    int dx[8] = { 2, 2, -2, -2, 1, 1, -1, -1 };
    int dy[8] = { 1, -1, 1, -1, 2, -2, 2, -2 };
    int len;
    const int MOD = 1e9 + 7;
public:
    int dfs(int i, int j, int pos)
    {
        if (pos == len)
            return 1;

        if (memo.count({ nums[i][j], pos}))
            return memo[{ nums[i][j], pos}];

        int ret = 0;

        for (int k = 0; k < 8; k++)
        {
            int x = i + dx[k];
            int y = j + dy[k];

            if (x >= 0 && x < 4 && y >= 0 && y < 3 && nums[x][y] != -1)
                ret = (ret + dfs(x, y, pos + 1)) % MOD;
        }

        memo[{ nums[i][j], pos}] = ret;
        return ret;
    }

    int knightDialer(int n) 
    {
        len = n;
        nums.resize(4, vector<int>(3, -1));
        nums = { {1, 2, 3}, {4,5,6}, {7,8,9}, {-1,0,-1} };
        
        int ret = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (nums[i][j] != -1)
                    ret = (ret + dfs(i, j, 1)) % MOD;
            }
        }

        return ret;
    }
};
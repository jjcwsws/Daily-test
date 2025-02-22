#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
    vector<string> ret;
    string path;
    int sz;
public:
    void DFS()
    {
        if (path.size() == sz)
        {
            ret.push_back(path);
            return;
        }
        else if (path.size() + 1 == sz)
        {
            ret.push_back(path + '1');
            if (path.back() == '1')
                ret.push_back(path + '0');
            return;
        }

        path += "11";
        DFS();
        path.resize(path.size() - 2);

        path += "10";
        DFS();
        path.resize(path.size() - 2);


        if (path.size() == 0 || path.back() == '1')
        {
            path += "01";
            DFS();
            path.resize(path.size() - 2);
        }
    }

    vector<string> validStrings(int n)
    {
        if (n == 1)
            return { "0", "1" };

        sz = n;
        DFS();

        return ret;
    }
};

// 数位DP
class Solution
{
    int num;
    vector<vector<int>> memo;
public:
    int DFS(int i, int pre, bool limit)
    {
        if (i < 0)
            return 1;

        // 限制的情况只出现一次，无需进行记忆化
        if (!limit && memo[i][pre] != -1)
            return memo[i][pre];

        // 如果没有限制，那么取上限1，如果限制，取num[i]
        int up = limit ? (num >> i) & 1 : 1;

        // 当前位取0，若num[i] = 0，并且limit，下一位依然limit
        // 如果 num[i] = 1，由于当前为0，那么下一位开始不再limit
        int ret = DFS(i - 1, 0, limit && up == 0);

        // 当前位取1，保证前一位不取1，并且up=1
        if (pre == 0 && up == 1)
            ret += DFS(i - 1, 1, limit); // 延续limit

        // 记忆化
        if (!limit)
            memo[i][pre] = ret;

        return ret;
    }

    int findIntegers(int n)
    {
        int bits = log2(n);
        memo.resize(bits + 1, vector<int>(2, -1));

        num = n;
        return DFS(bits, 0, true);
    }
};



// 数位DP模板
class Solution
{
    string num;
public:
    int DFS(int i, int mask, bool limit, bool isNum)
    {
        if (i == num.size())
            return isNum; // 题目要求 [1, n]，0不合法

        // 记录上限
        // 如果受到限制，最高num[i]，否则最高9
        int up = limit ? num[i] - '0' : 9;

        int ret = 0;
        // 不选
        // 额外处理isnum，是为了处理前导0
        if (!isNum)
            ret += DFS(i + 1, mask, false, false);

        for (int k = isNum ? 0 : 1; k <= up; k++)
        {
            if ((mask >> k & 1) == 0) // 数字没有选择过
                ret += DFS(i + 1, mask | (1 << k), limit && k == up, true);
        }

        return ret;
    }

    int countSpecialNumbers(int n)
    {
        num = to_string(n);

        return DFS(0, 0, true, false);
    }
};


class Solution
{
    string num;
    vector<vector<int>> memo;
public:
    int DFS(int i, int mask, bool limit, bool isNum)
    {
        if (i == num.size())
            return isNum; // 题目要求 [1, n]，0不合法

        // 记忆化
        if (!limit && memo[i][mask] != -1)
            return memo[i][mask];

        // 记录上限
        // 如果受到限制，最高num[i]，否则最高9
        int up = limit ? num[i] - '0' : 9;

        int ret = 0;
        // 不选
        // 额外处理isnum，是为了处理前导0
        if (!isNum)
            ret += DFS(i + 1, mask, false, false);

        for (int k = isNum ? 0 : 1; k <= up; k++)
        {
            if ((mask >> k & 1) == 0) // 数字没有选择过
                ret += DFS(i + 1, mask | (1 << k), limit && k == up, true);
        }

        // 如果limit，只出现一次，无需记忆化
        if (!limit)
            memo[i][mask] = ret;

        return ret;
    }

    int countSpecialNumbers(int n)
    {
        num = to_string(n);
        memo.resize(num.size(), vector<int>(pow(2, 10), -1));

        return DFS(0, 0, true, false);
    }
};
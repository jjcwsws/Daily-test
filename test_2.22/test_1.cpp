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

// ��λDP
class Solution
{
    int num;
    vector<vector<int>> memo;
public:
    int DFS(int i, int pre, bool limit)
    {
        if (i < 0)
            return 1;

        // ���Ƶ����ֻ����һ�Σ�������м��仯
        if (!limit && memo[i][pre] != -1)
            return memo[i][pre];

        // ���û�����ƣ���ôȡ����1��������ƣ�ȡnum[i]
        int up = limit ? (num >> i) & 1 : 1;

        // ��ǰλȡ0����num[i] = 0������limit����һλ��Ȼlimit
        // ��� num[i] = 1�����ڵ�ǰΪ0����ô��һλ��ʼ����limit
        int ret = DFS(i - 1, 0, limit && up == 0);

        // ��ǰλȡ1����֤ǰһλ��ȡ1������up=1
        if (pre == 0 && up == 1)
            ret += DFS(i - 1, 1, limit); // ����limit

        // ���仯
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



// ��λDPģ��
class Solution
{
    string num;
public:
    int DFS(int i, int mask, bool limit, bool isNum)
    {
        if (i == num.size())
            return isNum; // ��ĿҪ�� [1, n]��0���Ϸ�

        // ��¼����
        // ����ܵ����ƣ����num[i]���������9
        int up = limit ? num[i] - '0' : 9;

        int ret = 0;
        // ��ѡ
        // ���⴦��isnum����Ϊ�˴���ǰ��0
        if (!isNum)
            ret += DFS(i + 1, mask, false, false);

        for (int k = isNum ? 0 : 1; k <= up; k++)
        {
            if ((mask >> k & 1) == 0) // ����û��ѡ���
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
            return isNum; // ��ĿҪ�� [1, n]��0���Ϸ�

        // ���仯
        if (!limit && memo[i][mask] != -1)
            return memo[i][mask];

        // ��¼����
        // ����ܵ����ƣ����num[i]���������9
        int up = limit ? num[i] - '0' : 9;

        int ret = 0;
        // ��ѡ
        // ���⴦��isnum����Ϊ�˴���ǰ��0
        if (!isNum)
            ret += DFS(i + 1, mask, false, false);

        for (int k = isNum ? 0 : 1; k <= up; k++)
        {
            if ((mask >> k & 1) == 0) // ����û��ѡ���
                ret += DFS(i + 1, mask | (1 << k), limit && k == up, true);
        }

        // ���limit��ֻ����һ�Σ�������仯
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
#include <iostream>
#include <string>

using namespace std;

string num;

//      位数    最大值受限   是否合法数字 
int dfs(int i, bool limit, bool isNum)
{
    if (i == num.size())
        return isNum;

    int up = limit ? num[i] - '0' : 9;
    int ret = 0;

    if (!isNum)
        ret += dfs(i + 1, false, false);

    for (int k = isNum ? 0 : 1; k <= up; k++)
    {
        if ((num.size() - i) % 2 == k % 2)
            ret += dfs(i + 1, limit && k == up, true);
    }

    return ret;
}

int main()
{
    long long n;
    cin >> n;

    num = to_string(n);
    cout << dfs(0, true, false) << endl;

    return 0;
}

#include <vector>

class Solution 
{
public:
    int minAnagramLength(string s) 
    {
        int ret = 0;

        while (++ret < s.size())
        {
            if (s.size() % ret != 0)
                continue;

            vector<int> hash(26, 0);

            for (int i = 0; i < ret; i++)
                hash[s[i] - 'a']++;

            bool flag = true;
            for (int i = ret; i < s.size(); i += ret)
            {
                vector<int> tmp(26, 0);

                for (int j = i; j < i + ret && flag; j++)
                {
                    if (++tmp[s[j] - 'a'] > hash[s[j] - 'a'])
                        flag = false;
                }

                if (!flag) break;
            }

            if (flag) break;
        }

        return ret;
    }
};

class Solution
{
public:
    int minAnagramLength(string s)
    {
        int ret = 0;
        vector<int> hash(26, 0);

        while (++ret < s.size())
        {
            hash[s[ret - 1] - 'a']++;

            if (s.size() % ret != 0)
                continue;

            bool flag = true;
            for (int i = ret; i < s.size(); i += ret)
            {
                vector<int> tmp(26, 0);

                for (int j = i; j < i + ret && flag; j++)
                {
                    if (++tmp[s[j] - 'a'] > hash[s[j] - 'a'])
                        flag = false;
                }

                if (!flag) break;
            }

            if (flag) break;
        }

        return ret;
    }
};
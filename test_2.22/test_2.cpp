#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 模拟
class Solution
{
public:
    string getSmallestString(string s) 
    {
        for (int i = 1; i < s.size(); i++)
        {
            if ((s[i] - '0') % 2 == (s[i - 1] - '0') % 2
                && s[i] < s[i - 1])
            {
                swap(s[i], s[i - 1]);
                break;
            }
        }

        return s;
    }
};

// 枚举
class Solution 
{
public:
    //                           偶数      1-9   1 - (len - 1)
    string findLexSmallestString(string s, int a, int b)
    {
        string ret = s;
        // a的操作还原次数
        vector<int> hash{ 0,10,5,10,5,2,5,10,5,10 };
        // b为偶数，a永远操作同一批数字
        // b为基数，所有数字都可以被a操作

        int sz = s.size();
        // 枚举旋转操作次数
        for (int i = 0; i < s.size(); i++)
        {
            s = s.substr(sz - b) + s.substr(0, sz - b);

            // 数字操作次数
            for (int j = 0; j < hash[a]; j++)
            {
                // 操作奇数
                for (int m = 1; m < sz; m += 2)
                    s[m] = (s[m] + a - '0') % 10 + '0';

                ret = min(ret, s);
                if (b % 2)
                {
                    // 操作偶数
                    for (int n = 0; n < hash[a]; n++)
                    {
                        for (int m = 0; m < sz; m += 2)
                            s[m] = (s[m] + a - '0') % 10 + '0';

                        ret = min(ret, s);
                    }
                }
            }
        }

        return ret;
    }
};

// 贪心
class Solution 
{
public:
    string smallestString(string s)
    {
        int start = 0;
        while (s[start] == 'a' && start < s.size())
            start++;

        int end = start;
        while (s[end] != 'a' && end < s.size())
            --s[end++];

        if (start == s.size())
            s.back() = 'z';

        return s;
    }
};
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution 
{
public:
    bool isSubstringPresent(string s)
    {
        unordered_set<string> hash;

        for (int i = 0; i < s.size() - 1; i++)
        {
            string tmp = s.substr(i, 2);
            hash.insert(tmp);

            reverse(tmp.begin(), tmp.end());
            if (hash.count(tmp))
                return true;
        }

        return false;
    }
};

class Solution
{
public:
    long long countSubstrings(string s, char c) 
    {
        long long count = 0, ret = 0;
        for (auto ch : s)
        {
            if (ch == c)
                ret += 1 + count++;
        }

        return ret;
    }
};


class Solution 
{
public:
    int minimumDeletions(string word, int k)
    {
        vector<int> hash(26, 0);

        for (auto ch : word)
            hash[ch - 'a']++;

        int ret = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            if (!hash[i])
                continue;

            int tmp = 0;
            for (auto num : hash)
            {
                if (num > hash[i] + k)
                    tmp += num - (hash[i] + k);
                else if (num < hash[i])
                    tmp += num;
            }

            ret = min(ret, tmp);
        }

        return ret;
    }
};


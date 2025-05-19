#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    long long validSubstringCount(string word1, string word2) 
    {
        if (word1.size() < word2.size())
            return 0;

        long long ret = 0;
        vector<int> hash(26, 0);

        for (auto ch : word2)
            hash[ch - 'a']++;

        vector<int> count(26, 0);
        int left = 0, right = -1;
        while (++right < word2.size())
        {
            count[word1[right] - 'a']++;
        }

        while (right < word1.size())
        {
            count[word1[right] - 'a']++;

            bool flag = false;
            for (int i = 0; i < 26; i++)
            {
                if (hash[i] > count[i])
                    flag = false;
            }

            if (flag)
                ret += word1.size() - right;

            count[word1[left++] - 'a']--;
            right++;
        }

        return ret;
    }
};

class Solution
{
public:
    long long validSubstringCount(string word1, string word2)
    {
        if (word1.size() < word2.size()) 
            return 0;

        int cnt[26]{};
        int need = 0;

        for (char& c : word2)
        {
            if (++cnt[c - 'a'] == 1)
                ++need;
        }

        long long ans = 0;
        int win[26]{};
        int l = 0;

        for (char& c : word1) 
        {
            int i = c - 'a';
            if (++win[i] == cnt[i]) 
                --need;

            while (need == 0)
            {
                i = word1[l] - 'a';
                if (win[i] == cnt[i]) 
                    ++need;
                --win[i];
                ++l;
            }

            ans += l;
        }
        return ans;
    }
};
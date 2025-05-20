#include <iostream>

using namespace std;

class Solution 
{
public:
    long long validSubstringCount(string s, string t) 
    {
        if (s.length() < t.length()) 
            return 0;

        int diff[26]{}; 
        for (char c : t)
            diff[c - 'a']++;

        int less = 0;
        for (int d : diff) 
        {
            if (d > 0) 
                less++;
        }

        long long ans = 0;
        int left = 0;

        for (char c : s) 
        {
            diff[c - 'a']--;
            if (diff[c - 'a'] == 0) 
                less--;

            while (less == 0)
            { 
                char out_char = s[left++] - 'a';
                if (diff[out_char] == 0) 
                    less++;
                diff[out_char]++;
            }
            ans += left;
        }
        return ans;
    }
};

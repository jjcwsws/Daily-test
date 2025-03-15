#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int semiOrderedPermutation(vector<int>& nums)
    {
        int n = nums.size();
        
        int ret = 0, prev = nums[0];
        if (nums[0] != 1)
        {
            for (int i = 1; i < n; i++)
            {
                if (nums[i] == 1)
                {
                    ret += i;
                    swap(nums[i], prev);
                    break;
                }

                swap(nums[i], prev);
            }
        }

        if (nums[n - 1] != n)
        {
            for (int i = n - 2; i >= 0; i--)
            {
                if (nums[i] == n)
                {
                    ret += n - i - 1;
                    break;
                }
            }
        }

        return ret;
    }
};

class Solution 
{
public:
    bool isPalindrome(string s)
    {
        if (s.empty())
            return true;

        int n = s.size();
        int left = 0, right = n - 1;
        while (left < n && !isalpha(s[left]) && !isdigit(s[left]))
            { left++; };
        while (right >= 0 && !isalpha(s[right]) && !isdigit(s[right]))
            { right--; };

        while (left < right)
        {
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            do { left++; } 
            while (left < n && !isalpha(s[left]) && !isdigit(s[left]));

            do { right--; } 
            while (right >= 0 && !isalpha(s[right]) && !isdigit(s[right]));
        }

        return true;
    }
};


class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans(numRows);

        for (int i = 0; i < ans.size(); i++)
        {
            ans[i].resize(i + 1);
            ans[i][0] = ans[i][i] = 1;
        }

        for (int i = 2; i < ans.size(); i++)
        {
            for (int j = 1; j < ans[i].size() - 1; j++)
                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }

        return ans;
    }
};


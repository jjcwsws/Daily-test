#include <iostream>
#include <string>
#include <vector>

using namespace std;

//class Solution
//{
//public:
//    int longestNiceSubarray(vector<int>& nums)
//    {
//        int hash = 0, ret = 1;
//
//        int left = 0, right = 0;
//        while (right < nums.size())
//        {
//            if ((hash & nums[right]) == 0)
//            {
//                hash |= nums[right];
//                ret = max(ret, right - left + 1);
//                right++;
//                continue;
//            }
//
//            while ((hash & nums[right]) != 0)
//                hash &= ~nums[left++];
//        }
//
//        return ret;
//    }
//};


class Solution 
{
public:
    int partitionString(string s)
    {
        vector<bool> hash(26, false);

        int ret = 1;
        for (auto ch : s)
        {
            if (hash[ch - 'a'])
            {
                ret++;
                hash = vector<bool>(26, false);
            }
            hash[ch - 'a'] = true;
        }

        return ret;
    }
};

int main()
{
    Solution s;
    s.partitionString("abacaba");


    return 0;
}
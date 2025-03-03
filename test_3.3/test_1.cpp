#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// 滑动窗口
class Solution
{
public:
    int numFriendRequests(vector<int>& ages)
    {
        sort(ages.begin(), ages.end());

        int left = 0;
        int ret = 0;

        for (int i = 0; i < ages.size(); i++)
        {
            while (ages[left] <= 0.5 * ages[i] + 7 && left != i)
                left++;

            int j = i;
            while (i + 1 < ages.size() && ages[i + 1] == ages[i])
                i++;

            ret += (j - left) * (i - j + 1);
            if (ages[j] > 0.5 * ages[j] + 7)
                ret += (i - j + 1) * (i - j);
        }

        return ret;
    }
};

// 桶排序 + 前缀和
class Solution
{
public:
    int numFriendRequests(vector<int>& ages)
    {
        vector<int> hash(121, 0);
        vector<int> prefix(121, 0);
        for (auto age : ages)
            hash[age]++;

        for (int i = 1; i < 121; i++)
            prefix[i] = hash[i] + prefix[i - 1];

        int ret = 0;
        for (int i = 15; i < 121; i++)
        {
            int tmp = 0.5 * i + 7; // 向下取整

            if (tmp > i)
                continue;

            ret += hash[i] * (prefix[i] - prefix[tmp] - 1);
        }

        return ret;
    }
};
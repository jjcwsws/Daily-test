#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution
{
public:
    vector<int> resultsArray(vector<int> nums, int k)
    {
        int n = nums.size();
        vector<int> ret(n - k + 1, 0);
        nums.push_back(0);//∑¿÷π‘ΩΩÁ

        int count = 0;
        for (int i = 1; i < k; i++)
        {
            if (nums[i] == nums[i - 1] + 1)
                count++;
        }

        for (int i = k; i <= n; i++)
        {
            if (count == k - 1)
                ret[i - k] = nums[i - 1];
            else
                ret[i - k] = -1;

            if (nums[i - (k - 1)] == nums[i - k] + 1)
                count--;

            if (nums[i] == nums[i - 1] + 1)
                count++;
        }

        return ret;
    }
};

#include <unordered_map>

class Solution
{
public:
    long long maximumSubarraySum(vector<int>& nums, int k)
    {
        int n = nums.size();
        long long sum = 0;
        unordered_map<int, int> hash;
        for (int i = 0; i < k - 1; i++)
        {
            hash[nums[i]]++;
            sum += nums[i];
        }

        long long ret = 0;
        int left = 0, right = k - 1; // [left, right]
        while (right < n)
        {
            sum += nums[right];
            hash[nums[right]]++;

            if (hash.size() == k)
                ret = max(ret, sum);

            sum -= nums[left];
            if (--hash[nums[left]] == 0)
                hash.erase(nums[left]);

            left++;
            right++;
        }

        return ret;
    }
};
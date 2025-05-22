class Solution
{
public:
    int waysToSplitArray(vector<int>& nums)
    {
        long long total = reduce(nums.begin(), nums.end(), 0LL);
        int ans = 0;
        long long s = 0;
        for (int i = 0; i + 1 < nums.size(); i++)
        {
            s += nums[i];
            if (s * 2 >= total)
                ans++;
        }
        return ans;
    }
};

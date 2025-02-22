#include <iostream>
#include <vector>

using namespace std;

//class Solution
//{
//    long long MOD = 1e9 + 7;
//public:
//    int maximumSumSubsequence(vector<int>& nums, vector<vector<int>>& queries)
//    {
//        int n = nums.size();
//
//        // 包含 i 在内的，[0, i]的最大子序列和
//        vector<int> prefix_in(n, 0);
//        // 不包含 i 在内的，[0, i]的最大子序列和
//        vector<int> prefix_out(n, 0);
//        prefix_in[0] = max(nums[0], 0);
//
//        for (int i = 1; i < n; i++)
//        {
//            prefix_in[i] = max(prefix_in[i - 1], prefix_out[i - 1] + nums[i]);
//            prefix_out[i] = max(prefix_in[i - 1], prefix_out[i - 1]);
//        }
//
//        // 包含 i 在内的，[i, n]的最大子序列和
//        vector<int> suffix_in(n, 0);
//        // 不包含 i 在内的，[i, n]的最大子序列和
//        vector<int> suffix_out(n, 0);
//        suffix_in[n - 1] = max(nums[n - 1], 0);
//
//        for (int i = n - 2; i < n; i--)
//        {
//            suffix_in[i] = max(suffix_in[i + 1], suffix_out[i + 1] + nums[i]);
//            suffix_out[i] = max(suffix_in[i + 1], suffix_out[i + 1]);
//        }
//
//        long long ret = 0;
//        for (auto& querie : queries)
//        {
//            nums[querie[0]] = querie[1];
//
//            for (int i = max(1, querie[0]); i < n; i++)
//            {
//                prefix_in[i] = max(prefix_in[i - 1], prefix_out[i - 1] + nums[i]);
//                prefix_out[i] = max(prefix_in[i - 1], prefix_out[i - 1]);
//            }
//
//            for (int i = min(n - 2, querie[0]); i < n; i--)
//            {
//                suffix_in[i] = max(suffix_in[i + 1], suffix_out[i + 1] + nums[i]);
//                suffix_out[i] = max(suffix_in[i + 1], suffix_out[i + 1]);
//            }
//
//            ret += max(prefix_in[i] + suffix_out[i])
//        }
//
//        return ret % MOD;
//    }
//};


class Solution
{
    long long MOD = 1e9 + 7;
public:
    int maximumSumSubsequence(vector<int>& nums, vector<vector<int>>& queries)
    {
        int n = nums.size();

        // 包含 i 在内的，[0, i]的最大子序列和
        vector<int> dp_in(n, 0);
        // 不包含 i 在内的，[0, i]的最大子序列和
        vector<int> dp_out(n, 0);
        dp_in[0] = max(nums[0], 0);

        for (int i = 1; i < n; i++)
        {
            dp_in[i] = max(dp_in[i - 1], dp_out[i - 1] + nums[i]);
            dp_out[i] = max(dp_in[i - 1], dp_out[i - 1]);
        }

        long long ret = 0;
        for (auto& querie : queries)
        {
            nums[querie[0]] = querie[1];
            if (querie[0] == 0)
                dp_in[0] = max(0, nums[0]);
            else
                dp_in[querie[0]] =
                max(dp_in[querie[0] - 1], dp_out[querie[0] - 1] + nums[querie[0]]);

            for (int i = querie[0] + 1; i < n; i++)
            {
                int new_in = max(dp_in[i - 1], dp_out[i - 1] + nums[i]);
                int new_out = max(dp_in[i - 1], dp_out[i - 1]);

                if (new_in == dp_in[i] && new_out == dp_out[i])
                    break;

                dp_in[i] = new_in;
                dp_out[i] = new_out;
            }

            ret = (ret + max(dp_in[n - 1], dp_out[n - 1])) % MOD;
        }

        return ret % MOD;
    }
};
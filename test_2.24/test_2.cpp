#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        k = k - 1;
        while (k--)
        {
            pq.pop();
        }
        return pq.top();

    }
};
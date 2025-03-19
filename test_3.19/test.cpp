#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    nums.reserve(100);

    int minNum = INT_MAX;
    int tmp = 0;
    while (cin >> tmp)
    {
        nums.push_back(tmp);
        minNum = min(minNum, nums.back());
    }

    n = nums.size();

    vector<int> counts(n);
    for (auto num : nums)
        counts[num - minNum]++;
    
    int zero = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (counts[i] == 2)
            two = i;
        else if (counts[i] == 0)
            zero = i;
    }

    cout << zero + minNum << " " << two + minNum << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    x *= 2;

    vector<int> nums(n + 1, 0);
    for (int i = 1; i < n; i++)
        cin >> nums[i];

    // [left, right]
    long long left = 1, right = 0;
    long long count = 0;
    long long ans = 0;
    while (left < n)
    {
        while (right < n && count < x)
            count += nums[++right];

        ans = max(ans, right - left + 1);
        count -= nums[left++];
    }

    cout << ans << endl;
    return 0;
}

#include <queue>
#include <unordered_map>

class Solution 
{
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier)
    {
        priority_queue<int, deque<int>, greater<int>> q;
        unordered_map<int, priority_queue<int>, deque<int>, greater<int>> hash;

        for (int i = 0; i < nums.size(); i++)
        {
            q.push(nums[i]);
            hash[nums[i]].push(i);
        }

        while (k--)
        {
            int top = q.top();
            q.pop();

            int pos = hash[top].top();
            hash[top].pop();

            nums[pos] *= multiplier;
            q.push(nums[pos]);
            hash[nums[pos]].push(pos);
        }
        
        return nums;
    }
};


class Solution 
{
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        auto cmp = [&nums](int i, int j) {
            return nums[i] == nums[j] ? i > j : nums[i] > nums[j];
            };

        priority_queue<int, vector<int>, decltype(cmp)> q(cmp);

        for (int i = 0; i < nums.size(); ++i) 
            q.push(i);

        while (k--) 
        {
            int i = q.top();
            q.pop();
            nums[i] *= multiplier;
            q.push(i);
        }

        return nums;
    }
};


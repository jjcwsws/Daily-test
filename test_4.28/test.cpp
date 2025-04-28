#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x)
    {
        vector<int> appear;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == x)
                appear.push_back(i);
        }

        vector<int> ret;
        ret.reserve(queries.size());

        for (auto q : queries)
            ret.push_back(q > appear.size() ? -1 : appear[q - 1]);

        return ret;
    }
};

#include <unordered_map>

class Solution
{
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries)
    {
        unordered_map<int, int> hash;
        unordered_map<int, int> balls;
        vector<int> ret;
        ret.reserve(queries.size());

        int count = 0;
        for (auto& q : queries)
        {
            if (balls.count(q[0]) >= 0
                && --hash[balls[q[0]]] == 0)
            {
                count--;
            }

            balls[q[0]] = q[1];

            if (hash[q[1]]++ == 0)
                count++;

            ret.push_back(count);
        }

        return ret;
    }
};
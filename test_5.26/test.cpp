#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxDistance(vector<vector<int>>& arrays)
    {
        auto comp = [](const vector<int>& v1, const vector<int>& v2)->bool {
            return v1.front() == v2.front() ? 
                   v1.back() < v2.back() : v1.front() < v2.front();
            };

        sort(arrays.begin(), arrays.end(), comp);

        for (auto& arr : arrays)
        {
            for (auto num : arr)
                cout << num << " ";
            cout << endl;
        }

        return arrays.back().back() - arrays.front().front();
    }
};

class Solution
{
public:
    int maxDistance(vector<vector<int>>& arrays)
    {
        int n = arrays.size();
        // dp[i]: 第 i 个位置提供front，最大值与最小值
        pair<int, int> Front{ arrays[1].front(), arrays[0].back() };
        // dp[i]: 第 i 个位置提供back，最大值与最小值
        pair<int, int> Back{ arrays[0].front(), arrays[1].back() };
        cout << "Front: " << Front.first << " " << Front.second << endl;
        cout << "Back: " << Back.first << " " << Back.second << endl;

        for (int i = 2; i < n; i++)
        {
            Front.first = min(Front.first, arrays[i].front());
            cout << "Front: " << Front.first << " " << Front.second << endl;

            Back.second = max(Back.second, arrays[i].back());


            cout << "Back: " << Back.first << " " << Back.second << endl;

        }

        return max(Front.second - Front.first, Back.second - Back.first);
    }
};

class Solution
{
public:
    int maxDistance(vector<vector<int>>& arrays) 
    {
        int ans = 0;
        int minNum = INT_MAX / 2, maxNum = INT_MIN / 2; // 防止减法溢出

        for (auto& arr : arrays)
        {
            ans = max({ ans, arr.back() - minNum, maxNum - arr.front()});
            minNum = min(minNum, arr.front());
            maxNum = max(maxNum, arr.back());
        }

        return ans;
    }
};

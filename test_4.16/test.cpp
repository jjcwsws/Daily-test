#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void mul2(vector<int>& nums)
{
    int upper = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] *= 2;
        nums[i] += upper;
        upper = nums[i] / 10;
        nums[i] %= 10;
    }

    if (upper)
        nums.push_back(upper);
}

int main()
{
    int n;
    string num;

    cin >> n >> num;
    reverse(num.begin(), num.end());
    int pos = num.find('.');
    num.erase(pos, 1);

    vector<int> nums(num.size());

    for (int i = 0; i < num.size(); i++)
        nums[i] = num[i] - '0';

    for (int i = 0; i < n; i++)
        mul2(nums);

    if (nums[pos - 1] >= 5)
        nums[pos]++;

    int upper = 0;
    for (int i = pos; i < nums.size(); i++)
    {
        nums[i] += upper;
        upper = nums[i] / 10;
        nums[i] %= 10;
    }

    if (upper)
        nums.push_back(upper);

    for (int i = nums.size() - 1; i >= pos; i--)
        cout << nums[i];

    return 0;
}

//int main()
//{
//    int n;
//    double num;
//
//    cin >> n >> num;
//
//    num *= pow(2, n);
//    int ans = num - floor(num) >= 0.5 ? ceil(num) : floor(num);
//    cout << ans << endl;
//
//    return 0;
//}


class Solution 
{
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k)
    {
        auto comp = [k](const vector<int>& v1, const vector<int>& v2) {
            return v1[k] > v2[k];
            };

        sort(score.begin(), score.end(), comp);
        return score;
    }
};
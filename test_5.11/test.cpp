#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxConsecutive(int bottom, int top, vector<int>& special)
    {
        sort(special.begin(), special.end());

        int sz = special.size();
        int ret = special.front() - bottom;

        for (int i = 1; i < sz; i++)
            ret = max(special[i] - special[i - 1] - 1, ret);

        ret = max(ret, top - special.back());
        return ret;
    }
};
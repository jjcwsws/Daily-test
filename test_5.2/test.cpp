#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    string rankTeams(vector<string>& votes)
    {
        int m = votes[0].length();
        vector cnts(26, vector<int>(m));

        for (string& vote : votes)
        {
            for (int i = 0; i < m; i++)
                cnts[vote[i] - 'A'][i]--;
        }

        string ans = votes[0];
        ranges::sort(ans, {}, [&](char a) { return make_pair(cnts[a - 'A'], a); });
        return ans;
    }
};
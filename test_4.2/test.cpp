//#include <iostream>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//bool square(int x)
//{
//    return x != 0 && (int)sqrt(x) == sqrt(x);
//}
//
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//
//    for (int i = a; i <= b; i++)
//    {
//        if (!square(i))
//            continue;
//
//        string str = to_string(i);
//        for (int j = 1; j < str.size(); j++)
//        {
//            if (square(stoi(str.substr(0, j))) 
//                && square(stoi(str.substr(j, str.size() - j))))
//            {
//                cout << i << endl;
//            }
//        }
//
//    }
//
//    return 0;
//}

#include <iostream>

using namespace std;

static const int MOD = 123465;

int n, k;
int nums[500];
bool visited[500] = {false};

int dfs(int pos, int count)
{
    if (count + 1 == k)
        return pos == n;

    int ret = 0;

    for (int i = 0; i < n; i++) 
    {
        if (!visited[i])
        {
            visited[i] = true;
            nums[pos] = i;
            ret += dfs(pos + 1, count + (pos > 1
                && ((nums[pos - 1] > nums[pos - 2] && nums[pos - 1] > nums[pos])
                || (nums[pos - 1] < nums[pos - 2] && nums[pos - 1] < nums[pos]))));
            visited[i] = false;
        }
    }

    return ret % MOD;
}

int main()
{
    cin >> n >> k;

    if (k == 1)
        cout << 2 << endl;
    else
        cout << dfs(0, 0) * 2 << endl;

    return 0;
}

#define ll long long
#define setp setprecision
#define mem(a, m) memset(a, m, sizeof(a))
using namespace std;

const int MOD = 123456;
int n, k;
int dp[505][505];
int mod(int a)
{
    return a % MOD;
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> k;
    dp[1][0] = 1;
    for (int i = 2; i < n; i++)
    {
        dp[i][0] = 2;
        for (int j = 0; j <= i; j++)
        {
            dp[i + 1][j] += mod(dp[i][j] * (j + 1));
            dp[i + 1][j + 1] += mod(dp[i][j] * 2);
            dp[i + 1][j + 2] += mod(dp[i][j] * (i - j - 2));
        }
    }
    cout << dp[n][k - 1] % MOD;
    return 0;
}

class Solution
{
public:
    vector<int> closestRoom(vector<vector<int>>& rooms, vector<vector<int>>& queries)
    {
        ranges::sort(rooms, {}, [](auto& a) { return -a[1]; });

        int q = queries.size();
        vector<int> query_ids(q);
        iota(query_ids.begin(), query_ids.end(), 0);
        ranges::sort(query_ids, {}, [&](int i) { return -queries[i][1]; });

        vector<int> ans(q, -1);
        set<int> room_ids;
        int j = 0;
        for (int i : query_ids)
        {
            int preferred_id = queries[i][0], min_size = queries[i][1];
            while (j < rooms.size() && rooms[j][1] >= min_size)
            {
                room_ids.insert(rooms[j][0]);
                j++;
            }

            int diff = INT_MAX;
            auto it = room_ids.lower_bound(preferred_id);
            if (it != room_ids.begin())
            {
                auto p = prev(it);
                diff = preferred_id - *p;
                ans[i] = *p;
            }

            if (it != room_ids.end() && *it - preferred_id < diff)
                ans[i] = *it;
        }
        return ans;
    }
};
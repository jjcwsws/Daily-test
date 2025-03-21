// Ç°×ººÍ
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    long  long tmp;
//    long long ans = 0, prefix = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> tmp;
//
//        ans += tmp * prefix;
//        prefix += tmp;
//    }
//
//    cout << ans << endl;
//    return 0;
//}


#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

unordered_map<int, int> days({
    {1, 31},
    {2, 28},
    {3, 31},
    {4, 30},
    {5, 31},
    {6, 30},
    {7, 31},
    {8, 31},
    {9, 30},
    {10, 31},
    {11, 30},
    {12, 31}
    });

int getDay(int year, int month) 
{
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
        return 29;

    return days[month];
}

bool isPalindromeDay(int year)
{
    string str = to_string(year);
    reverse(str.begin(), str.end());

    int month = stoi(str.substr(0, 2));
    int day = stoi(str.substr(2, 2));

    if (month > 12)
        return false;

    return day < getDay(year, month);
}

bool isABAB(int year)
{
    string str = to_string(year);
    return str[0] == str[2] && str[1] == str[3];
}

string getStr(int year)
{
    string str = to_string(year);
    string pre = str;
    reverse(str.begin(), str.end());

    return pre + str;
}

int main()
{
    string n;
    cin >> n;

    int year = stoi(n.substr(0, 4));

    string ansA = "";
    string ansB = "";

    while (ansA.empty() || ansB.empty())
    {
        year++;

        if (!isPalindromeDay(year))
            continue;

        if (ansA.empty())
            ansA = getStr(year);

        if (ansB.empty() && isABAB(year))
            ansB = getStr(year);
    }

    cout << ansA << endl;
    cout << ansB << endl;

    return 0;
}

#include <queue>

class Solution 
{
public:
    int minSetSize(vector<int>& arr)
    {
        unordered_map<int, int> hash;
        priority_queue<int ,deque<int>, less<int>> q;

        for (auto num : arr)
            hash[num]++;

        for (auto p : hash)
            q.push(p.second);

        int count = 0, sum = arr.size();
        while (sum > arr.size() / 2)
        {
            count++;
            int top = q.top();
            q.pop();

            sum -= top;
        }

        return count;
    }
};
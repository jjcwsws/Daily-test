#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2)
    {
        bool flag1 = ((coordinate1[0] - 'a' + 1) % 2 == (coordinate1[1] - '0') % 2);
        bool flag2 = ((coordinate2[0] - 'a' + 1) % 2 == (coordinate2[1] - '0') % 2);

        return flag1 == flag2;
    }
};
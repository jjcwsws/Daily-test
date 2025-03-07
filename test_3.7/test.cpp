#include <iostream>

using namespace std;

class Solution 
{
public:
    //                                白车           白象         黑皇后
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) 
    {
        bool flag = false;
        if (a == e)
        {
            if (a != c)
                return 1;

            if (c < min(a, e) || c > max(a, e))
                return 1;

            flag = true;
        }

        if (b == f)
        {
            if (b != d)
                return 1;

            if (d < min(a, e) || d > max(a, e))
                return 1;

            flag = true;
        }

        bool flag1 = (c % 2) == (d % 2);
        bool flag2 = (e % 2) == (f % 2);

        if (flag1 == flag2)
        {
            for (int i = 0; i < 8; i++)
            {
                if (((c + i == e && d - i == f) && (c + i != a || d - i != b))
                    || ((c - i == e && d + i == f) && (c - i != a || d + i != b)))
                    return 1;
            }

            return 2;
        }

        return flag ? 3 : 2;
    }
};

class Solution {
    // m 在 l 和 r 之间（写不写等号都可以）
    bool in_between(int l, int m, int r) {
        return min(l, r) < m && m < max(l, r);
    }

public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if (a == e && (c != e || !in_between(b, d, f)) || // 车直接攻击到皇后（同一行）
            b == f && (d != f || !in_between(a, c, e)) || // 车直接攻击到皇后（同一列）
            c + d == e + f && (a + b != e + f || !in_between(c, a, e)) || // 象直接攻击到皇后
            c - d == e - f && (a - b != e - f || !in_between(c, a, e))) {
            return 1;
        }
        return 2;
    }
};


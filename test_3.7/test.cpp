#include <iostream>

using namespace std;

class Solution 
{
public:
    //                                �׳�           ����         �ڻʺ�
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
    // m �� l �� r ֮�䣨д��д�ȺŶ����ԣ�
    bool in_between(int l, int m, int r) {
        return min(l, r) < m && m < max(l, r);
    }

public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if (a == e && (c != e || !in_between(b, d, f)) || // ��ֱ�ӹ������ʺ�ͬһ�У�
            b == f && (d != f || !in_between(a, c, e)) || // ��ֱ�ӹ������ʺ�ͬһ�У�
            c + d == e + f && (a + b != e + f || !in_between(c, a, e)) || // ��ֱ�ӹ������ʺ�
            c - d == e - f && (a - b != e - f || !in_between(c, a, e))) {
            return 1;
        }
        return 2;
    }
};


#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//1+..+n
class Solution {
public:
    class A {
    public:
        A()
        {
            _count++;
            _sum += _count;
        }

        static int _count;
        static int _sum;
    };
    int Sum_Solution(int n) {
        A* p = new A[n];
        int result = A::_sum;
        delete[] p;
        return result;
    }

};
int Solution::A::_count = 0;
int Solution::A::_sum = 0;
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//判断一个数是不是质数
#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int flag = 0;
    int i = 0;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (i != 1 && n % i == 0)
        {
            cout << "不是质数";
            break;
        }

    }
    if (i != 1 && i >= sqrt(n))
        cout << "是质数";


    return 0;
}
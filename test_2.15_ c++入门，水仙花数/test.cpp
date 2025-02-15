#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    for (int i = 101; i < 1000; i++)
    {
        if ((pow(i / 100, 3) + pow(i % 100 / 10, 3) + pow(i % 10, 3)) == i)
        {
            cout << i << endl;
        }
    }


    return 0;
}
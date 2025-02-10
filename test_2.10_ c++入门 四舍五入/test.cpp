#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <iostream>
using namespace std;

int main() {
    float i;
    cin >> i;
    if (i > 0)
        cout << (int)(i + 0.5);
    else
        cout << (int)(i - 0.5);
    return 0;
}
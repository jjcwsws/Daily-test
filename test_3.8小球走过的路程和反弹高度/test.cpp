#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <iostream>

using namespace std;

int main() {

    // ����ĸ߶Ⱥ���صĴ���
    double h;
    int n;

    cin >> h;
    cin >> n;

    double sum = h;
    for (int i = 1; i < n; i++)
    {
        h /= 2;
        sum += h * 2;

    }
    printf("%0.1f %0.1f", sum, h / 2);


    return 0;
}
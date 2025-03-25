#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min << " " << max;


    return 0;
}
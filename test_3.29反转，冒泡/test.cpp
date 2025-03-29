#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//数组元素反转
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int arr[6] = { 0 };
//
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "[";
//    for (int i = 0; i < len; i++) {
//        if (i == len - 1) {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//
//    int left = 0, right = len - 1;
//    while (left < right)
//    {
//        swap(arr[left], arr[right]);
//        left++;
//        right--;
//    }
//
//
//    cout << "[";
//    for (int i = 0; i < len; i++) {
//        if (i == len - 1) {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//
//    return 0;
//}

//c++冒泡排序
#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
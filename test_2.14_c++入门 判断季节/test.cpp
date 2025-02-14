#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <iostream>
using namespace std;

int main() {

    int month;
    cin >> month;
    if (month >= 3 && month <= 5)
        cout << "春季";
    else if (month >= 6 && month <= 8)
        cout << "夏季";
    else if (month >= 9 && month <= 11)
        cout << "秋季";
    else if (month == 1 || month == 2 || month == 12)//不宜组合，就用或来分开
        cout << "冬季";
    else
        cout << "不合法";


    return 0;
}
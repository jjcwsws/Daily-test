#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <iostream>
using namespace std;

int main() {

    double weight;
    double height;

    cin >> weight;
    cin >> height;
    double BMI = weight / (height * height);
    if (BMI < 18.5)
        cout << "ƫ��";
    else if (BMI >= 18.5 && BMI < 20.9)
        cout << "����";
    else if (BMI >= 20.9 && BMI <= 24.9)
        cout << "����";
    else
        cout << "ƫ��";

    return 0;
}
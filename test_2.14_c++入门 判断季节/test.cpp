#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <iostream>
using namespace std;

int main() {

    int month;
    cin >> month;
    if (month >= 3 && month <= 5)
        cout << "����";
    else if (month >= 6 && month <= 8)
        cout << "�ļ�";
    else if (month >= 9 && month <= 11)
        cout << "�＾";
    else if (month == 1 || month == 2 || month == 12)//������ϣ����û����ֿ�
        cout << "����";
    else
        cout << "���Ϸ�";


    return 0;
}
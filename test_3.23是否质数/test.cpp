#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//�ж�һ�����ǲ�������
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
            cout << "��������";
            break;
        }

    }
    if (i != 1 && i >= sqrt(n))
        cout << "������";


    return 0;
}
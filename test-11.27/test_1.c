#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//判断月份天数
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) == 2)
    {
        switch (b)
        {
        case 2:
            if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
                printf("29\n");
            else
                printf("28\n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        default:
            printf("30\n");
            break;
        }
    }
    return 0;
}
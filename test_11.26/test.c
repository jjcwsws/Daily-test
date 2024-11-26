#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//找整除数,法1分支语句
int main()
{
    int a = 0;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        if (a % 3 == 0 && a % 7 == 0)
        {
            printf("2 3 7");
        }
        else if (a % 3 == 0)
        {
            printf("2 3");
        }
        else if (a % 7 == 0)
        {
            printf("2 7");
        }
        else
        {
            printf("2");
        }
    }
    else if (a % 3 == 0)
    {
        if (a % 2 == 0 && a % 7 == 0)
        {
            printf("2 3 7");
        }
        else if (a % 2 == 0)
        {
            printf("2 3");
        }
        else if (a % 7 == 0)
        {
            printf("3 7");
        }
        else
        {
            printf("3");
        }
    }
    else if (a % 7 == 0)
    {
        if (a % 2 == 0 && a % 3 == 0)
        {
            printf("2 3 7");
        }
        else if (a % 2 == 0)
        {
            printf("2 7");
        }
        else if (a % 3 == 0)
        {
            printf("3 7");
        }
        else
        {
            printf("7");
        }
    }
    else
    {
        printf("n");
    }
    return 0;
}
//法2，数组，循环
int main()
{
    int a;//输入变量
    int i = 0;//循环控制变量
    int b = 0;//计数器
    int arr[3] = { 2,3,7 };
    scanf("%d", &a);
    for (i = 0; i < 3; i++)
    {
        if (a % arr[i] == 0)
        {
            printf("%d ", arr[i]);
            b++;
        }
    }
    if (b == 0)
    {
        printf("n");
    }
    return 0;
}
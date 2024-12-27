#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//序列重组矩阵
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int i = 0;
    int j = 0;
    int arr[100] = { 0 };
    for (i = 1; i <= a * b; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= a * b; i++)
    {
        if (i % b == 0)
            printf("%d\n", arr[i]);
        else
            printf("%d ", arr[i]);
    }
    return 0;
}
//法2
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int i = 0;
    int j = 0;
    int arr[100] = { 0 };
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i]);//边赋值边打印
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
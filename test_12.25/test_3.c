#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
// KiKi判断上三角矩阵
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    int arr[100][100] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;//起始标志
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)//遍历数组
                flag = 0;
        }
        if (flag == 0)//跳出循环，减少遍历时间
            break;
    }
    if (flag == 0)
        printf("NO");
    else
        printf("YES");
    return 0;
}
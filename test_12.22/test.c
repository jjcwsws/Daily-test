#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//矩阵元素定位
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int arr[6][26] = { 0 };
    int i = 0;
    scanf("%d%d", &a, &b);
    for (i = 1; i <= a; i++)//直接将数组从第一行开始
    {
        int j = 0;
        for (j = 1; j <= b; j++)
        {
            scanf("%d", &arr[i][j]);//输入
        }
    }
    scanf("%d%d", &a, &b);
    printf("%d", arr[a][b]);
    return 0;
}
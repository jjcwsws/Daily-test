#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//图像相似度
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int i = 0;
    int j = 0;
    float count = 0;
    int arr[100][100] = { 0 };
    int arr1[100][100] = { 0 };
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    //比较
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (arr[i][j] == arr1[i][j])
            {
                count++;
            }
        }
    }
    printf("%.2f", count / (a * b) * 100);

    return 0;
}
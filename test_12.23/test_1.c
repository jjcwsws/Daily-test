#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int arr[10][10] = { 0 };
    scanf("%d%d", &a, &b);
    int i = 0;
    int j = 0;
    int max = 0;
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
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                a = i + 1;
                b = j + 1;
            }
        }
    }
    printf("%d %d", a, b);
    return 0;
}
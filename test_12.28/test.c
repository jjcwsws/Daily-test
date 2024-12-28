#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//¾ØÕó×ªÖÃ
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int i = 0;
    int j = 0;
    int arr[100][100] = { 0 };
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (j = 0; j < b; j++)
    {
        for (i = 0; i < a; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
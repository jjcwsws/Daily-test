#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//����Ԫ�ض�λ
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int arr[6][26] = { 0 };
    int i = 0;
    scanf("%d%d", &a, &b);
    for (i = 1; i <= a; i++)//ֱ�ӽ�����ӵ�һ�п�ʼ
    {
        int j = 0;
        for (j = 1; j <= b; j++)
        {
            scanf("%d", &arr[i][j]);//����
        }
    }
    scanf("%d%d", &a, &b);
    printf("%d", arr[a][b]);
    return 0;
}
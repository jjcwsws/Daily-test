#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//反斜线形图案
int main() {
    int a = 0;
    while (~scanf("%d", &a))
    {
        int i = 0;
        for (i = 0; i < a; i++)
        {
            int j = 0;
            for (j = 0; j < a; j++)
            {
                if (i == j)//看成一个二维数组的对角线处
                {
                    for (j = 0; j < i; j++)//控制打印空格的数量
                    {
                        printf(" ");
                    }
                    printf("*");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
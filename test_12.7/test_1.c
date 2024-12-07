#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int a = 0;
    while (~scanf("%d", &a))
    {
        for (i = 0; i < a+1 ; i++)
        {
            for (j = 0; j < a - i; j++)
            {
                printf(" ");
            }
            if (j == a - i)
            {
                for (j = a - i; j < a+1; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < i + 1; j++)
            {
                printf(" ");
            }
            for (j = 0; j < a - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

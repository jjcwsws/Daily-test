#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdio.h>

int main()
{
    int a = 0;
    int i = 0;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (i <= 10 && i % 10 == i)
            printf("%d\n", i);
        else if (i <= 100 && i > 10 && i % 10 == i / 10)
            printf("%d\n", i);
        else if (i <= 1000 && i > 100 && i % 10 == i / 100)
            printf("%d\n", i);
        else if (i <= 10000 && i > 1000 && i % 10 == i / 1000 && i / 10 % 10 == i / 100 % 10)
            printf("%d\n", i);
        else if (i <= 100000 && i > 10000 && i % 10 == i / 10000 && i / 10 % 10 == i / 1000 % 10)
            printf("%d\n", i);
    }
    return 0;
}
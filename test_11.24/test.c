#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    char a = 0;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g;
    while (scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g) != EOF)
    {
        int max = 0;
        int min = a;
        int arr[7] = { a,b,c,d,e,f,g };
        int i = 0;
        for (i = 0; i < 7; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
            else
            {
                max = max;
            }
        }
        for (i = 1; i < 7; i++)
        {
            if (min < arr[i])
            {
                min = min;
            }
            else
            {
                min = arr[i];
            }
        }
        double avg = 0;
        avg = (a + b + c + d + e + f + g - max - min) / 5.0;
        
        printf("%d %d\n", max, min);
        printf("%.2lf\n", avg);
    }
    return 0;
}
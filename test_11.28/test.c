#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    char arr[4] = { '+','-','*','/' };
    float a, c;
    char b;
    scanf("%f%c%f", &a, &b, &c);
    //float d = abc;
    int i = 0;
    int count = 0;
    for (i = 0; i < 4; i++)
    {
        if (arr[i] == b)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        if (b == '+')
        {
            float d = a + c;
            printf("%.4f+%.4f=%.4f", a, c, d);
        }
        else if(b=='-')
        {
            float d = a - c;
            printf("%.4f-%.4f=%.4f", a, c, d);
        }
        else if (b == '*')
        {
            double d = a * c;
            printf("%.4f*%.4f=%.4lf", a, c, d);
        }
        else if (c == 0.0)
            printf("Wrong!Division by zero!");
        else
        {
            float d = a /c;
            printf("%.4f/%.4f=%.4f", a, c, d);
        }
    }
    else
        printf("Invalid operation!");
    return 0;
}
//
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int i = 0;
    int sum = 0;
    float c = 0;
    int flag = 1;
    for (i = 1; i <= a; i++)
    {
        sum += (flag) * (2 * i - 1);
        c += 1.0 / sum;
        flag = -flag;
    }
    printf("%.3f", c);
    return 0;
}
//
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int i = 0;
    int sum = 0;
    int c = 0;
    for (i = 1; i <= 10; i++)
    {
        c = a % 10;
        a = a / 10;
        sum += c;
        if (a == 0)
        {
            break;
        }
    }
    printf("%d", sum);
    return 0;
}
//
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int sum = 0;
    int sum1 = 0;
    int i = 0;
    for (i = 1; i <= a; i++)
    {
        sum += i;
        sum1 += sum;
    }
    printf("%d", sum1);
    return 0;
}
//
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int count = 0;
    int i = 0;
    while (a > 0)
    {
        if (a == 1)
            break;
        if (a % 2 == 0)
        {
            a = a / 2;
            count++;
        }
        else
        {
            a = a * 3 + 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
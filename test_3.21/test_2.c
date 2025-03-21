#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    long long a = 0, b = 0,c=0;
    scanf("%lld %lld", &a, &b);
    long k = a * b;
    if (a < b)
    {
        if (b % a == 0)
        {

            printf("%lld", a + b);
        }

        else
        {
            while (1)
            {
                c = b % a;
                b = a;
                a = c;
                if (b % a == 0)
                {
                    printf("%lld", a + k / a);
                    break;
                }

            }
    
        }
    }
    else
    {
        if (a % b == 0)
        {

            printf("%lld", a + b);
        }

        else
        {
            ;
            while (1)
            {
                c = a % b;
                a = b;
                b = c;
                if (a % b == 0)
                {
                    printf("%lld", b + k/b);
                    break;
                }
                
            }
        }
    }
    return 0;
}

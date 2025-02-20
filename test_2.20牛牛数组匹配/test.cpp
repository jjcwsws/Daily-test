#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int submin(int suma, int sumb)
{
    if (suma > sumb)
        return suma - sumb;
    else
        return sumb - suma;
}
int main() {

    int a[100] = { 0 };
    int b[100] = { 0 };
    int n, m;

    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += a[i];
    }
    int min = 0;
    min = suma;
    int x = 0, y = 0;
    for (int i = 0; i < m; i++)
    {
        int sumb = b[i];
        for (int j = i + 1; j <= m; j++)
        {

            if (submin(suma, sumb) < min)
            {
                min = submin(suma, sumb);
                x = i;
                y = j;
            }
            sumb += b[j];

        }
    }
    for (int i = x; i < y; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if ((((b == 2) + (a == 3)) == 1)
//                            && (((b == 2) + (e == 4)) == 1)
//                            && (((c == 1) + (d == 2)) == 1)
//                            && (((c == 5) + (d == 3)) == 1)
//                            && (((e == 4) + (a == 1))) == 1)
//                        {
//                            if (a * b * c * d * e == 120)
//                            {
//                                printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}

//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        arr[i][i] = 1;
//        arr[i][0] = 1;
//    }
//    for (i = 2; i < 10; i++)
//    {
//        int j = 0;
//        for (j = 1; j < 10; j++)
//        {
//            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//        }
//    }
//    for (i = 0; i < 10; i++)
//    {
//        int j = 0;
//        for (j = 0; j <= i; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }printf("\n");
//    }
//    return 0;
//}

int main()
{
    char ÆæÀÖ = 0;
    for (ÆæÀÖ = 'A'; ÆæÀÖ <= 'D'; ÆæÀÖ++)
    {
        if ((ÆæÀÖ != 'A') + (ÆæÀÖ == 'C') + (ÆæÀÖ == 'D') + (ÆæÀÖ != 'D') == 3)
        {
            printf("Ð×ÊÖÊÇ%c\n", ÆæÀÖ);
        }
    }
    return 0;
}
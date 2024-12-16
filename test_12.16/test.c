#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
// 数字三角形
//#include <stdio.h>
//int main() {
//    int a = 0;
//    while (~scanf("%d", &a))
//    {
//        int i = 0;
//        for (i = 1; i <= a; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
#include <stdio.h>
int main() {
    int a = 0;
    while (~scanf("%d", &a))
    {
        int i = 0;
        for (i = 0; i < 3 * a; i++)//控制打印上半部分
        {
            int j = 0;
            for (j = 0; j < 3 * a - 1 - i; j++)//控制每行打印的空格
            {
                printf(" ");
            }
            if (i % 3 == 0)//控制打印一个*的数量
            {
                int k = 0;
                printf("*");
                for (k = 0; k < i / 3; k++)//需要打印多少次数5个空格
                {
                    for (j = 0; j < 5; j++)//每次打印5个空格
                    {
                        printf(" ");
                    }
                    printf("*");
                }
                printf("\n");
            }
            else if (i % 3 == 1)//控制打印两个*的数量
            {
                int k = 0;
                printf("* *");
                for (k = 0; k < (i - 1) / 3; k++)//需要打印多少次数3个空格
                {
                    for (j = 0; j < 3; j++)//每次打印3个空格
                    {
                        printf(" ");
                    }
                    printf("* *");
                }
                printf("\n");
            }
            else if (i % 3 == 2)//控制每一层（不是每一行）末行打印*的数量
            {
                for (j = 0; j <= i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        for (i = 0; i < a; i++)//控制打印下半部分
        {
            int j = 0;
            for (j = 0; j < 3 * a - 1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}

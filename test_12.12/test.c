#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//正斜线形图案
//int main() {
//    int a = 0;
//    while (~scanf("%d", &a))
//    {
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2*a-1 ; j++)
//            {
//                
//                if (i+j==a)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
// 空心正方形图案
//版本一
//#include <stdio.h>
//int main() {
//    int a = 0;
//    while (~scanf("%d", &a))
//    {
//        int arr[20][20];
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            if (i == 0)
//            {
//                for (j = 0; j < a; j++)
//                {
//                    printf("* ");
//                }
//            }
//            else if (i > 0 && i < a-1)
//            {
//                printf("*");
//                    for (j = 0; j < 2 * a - 3; j++)
//                    {
//                        printf(" ");
//                    }
//                printf("*");
//            }
//            else
//            {
//                for (j = 0; j < a; j++)
//                {
//                    printf("* ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//版本二
//#include <stdio.h>
//int main() {
//    int a = 0;
//    while (~scanf("%d", &a))//多组输入
//    {
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < a; j++)
//            {
//                if (i == 0 || i == a - 1 || j == 0 || j == a - 1)//找规律
//                {
//                    printf("* ");
//                }
//                else
//                    printf("  ");//两个空格
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

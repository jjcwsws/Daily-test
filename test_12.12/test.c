#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//��б����ͼ��
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
// ����������ͼ��
//�汾һ
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
//�汾��
//#include <stdio.h>
//int main() {
//    int a = 0;
//    while (~scanf("%d", &a))//��������
//    {
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < a; j++)
//            {
//                if (i == 0 || i == a - 1 || j == 0 || j == a - 1)//�ҹ���
//                {
//                    printf("* ");
//                }
//                else
//                    printf("  ");//�����ո�
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
// ����������
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
        for (i = 0; i < 3 * a; i++)//���ƴ�ӡ�ϰ벿��
        {
            int j = 0;
            for (j = 0; j < 3 * a - 1 - i; j++)//����ÿ�д�ӡ�Ŀո�
            {
                printf(" ");
            }
            if (i % 3 == 0)//���ƴ�ӡһ��*������
            {
                int k = 0;
                printf("*");
                for (k = 0; k < i / 3; k++)//��Ҫ��ӡ���ٴ���5���ո�
                {
                    for (j = 0; j < 5; j++)//ÿ�δ�ӡ5���ո�
                    {
                        printf(" ");
                    }
                    printf("*");
                }
                printf("\n");
            }
            else if (i % 3 == 1)//���ƴ�ӡ����*������
            {
                int k = 0;
                printf("* *");
                for (k = 0; k < (i - 1) / 3; k++)//��Ҫ��ӡ���ٴ���3���ո�
                {
                    for (j = 0; j < 3; j++)//ÿ�δ�ӡ3���ո�
                    {
                        printf(" ");
                    }
                    printf("* *");
                }
                printf("\n");
            }
            else if (i % 3 == 2)//����ÿһ�㣨����ÿһ�У�ĩ�д�ӡ*������
            {
                for (j = 0; j <= i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        for (i = 0; i < a; i++)//���ƴ�ӡ�°벿��
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

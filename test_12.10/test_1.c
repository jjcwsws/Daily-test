#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//struct stu
//{
//	int data[1000];
//	int num;
//};
//struct stu s = { {1,2,3,4},1000 };
////�ṹ�崫�Σ���ֵ
//void print1(struct stu s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ�崫�Σ���ַ
//void print2(struct stu* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);//�ṹ���ַ����
//	print2(&s);
//	return 0;
//}
#include <stdio.h>
int main() {
    int a = 0;
    int i = 0;
    while (~scanf("%d", &a))//���ƶ�������
    {
        for (i = 0; i < a; i++)//��ӡ�ϰ벿��
        {
            int j = 0;
            for (j = 0; j < a-i; j++)
            {
                printf("  ");//�ȴ�ӡ�ո�
            }
            for (j = 0; j <= i; j++)//���ƴ�ӡ*������
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 0; i <= a; i++)//��ӡ�°벿��
        {
            int j = 0;
            for (j = 0; j < i; j++)//�ȴ�ӡ�ո�
            {
                printf("  ");
            }
            for (j = 0; j <= a - i; j++)//���ƴ�ӡ*������
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
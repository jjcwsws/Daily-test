#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//struct stu
//{
//	int data[1000];
//	int num;
//};
//struct stu s = { {1,2,3,4},1000 };
////结构体传参，传值
//void print1(struct stu s)
//{
//	printf("%d\n", s.num);
//}
////结构体传参，传址
//void print2(struct stu* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);//结构体地址传参
//	print2(&s);
//	return 0;
//}
#include <stdio.h>
int main() {
    int a = 0;
    int i = 0;
    while (~scanf("%d", &a))//控制多组输入
    {
        for (i = 0; i < a; i++)//打印上半部分
        {
            int j = 0;
            for (j = 0; j < a-i; j++)
            {
                printf("  ");//先打印空格
            }
            for (j = 0; j <= i; j++)//控制打印*的数量
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 0; i <= a; i++)//打印下半部分
        {
            int j = 0;
            for (j = 0; j < i; j++)//先打印空格
            {
                printf("  ");
            }
            for (j = 0; j <= a - i; j++)//控制打印*的数量
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
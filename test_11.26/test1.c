#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//��������,��1��֧���
int main()
{
    int a = 0;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        if (a % 3 == 0 && a % 7 == 0)
        {
            printf("2 3 7");
        }
        else if (a % 3 == 0)
        {
            printf("2 3");
        }
        else if (a % 7 == 0)
        {
            printf("2 7");
        }
        else
        {
            printf("2");
        }
    }
    else if (a % 3 == 0)
    {
        if (a % 2 == 0 && a % 7 == 0)
        {
            printf("2 3 7");
        }
        else if (a % 2 == 0)
        {
            printf("2 3");
        }
        else if (a % 7 == 0)
        {
            printf("3 7");
        }
        else
        {
            printf("3");
        }
    }
    else if (a % 7 == 0)
    {
        if (a % 2 == 0 && a % 3 == 0)
        {
            printf("2 3 7");
        }
        else if (a % 2 == 0)
        {
            printf("2 7");
        }
        else if (a % 3 == 0)
        {
            printf("3 7");
        }
        else
        {
            printf("7");
        }
    }
    else
    {
        printf("n");
    }
    return 0;
}
//��2�����飬ѭ��
int main()
{
    int a;//�������
    int i = 0;//ѭ�����Ʊ���
    int b = 0;//������
    int arr[3] = { 2,3,7 };
    scanf("%d", &a);
    for (i = 0; i < 3; i++)
    {
        if (a % arr[i] == 0)
        {
            printf("%d ", arr[i]);
            b++;
        }
    }
    if (b == 0)
    {
        printf("n");
    }
    return 0;
}
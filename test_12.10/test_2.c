#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//��б����ͼ��
int main() {
    int a = 0;
    while (~scanf("%d", &a))
    {
        int i = 0;
        for (i = 0; i < a; i++)
        {
            int j = 0;
            for (j = 0; j < a; j++)
            {
                if (i == j)//����һ����ά����ĶԽ��ߴ�
                {
                    for (j = 0; j < i; j++)//���ƴ�ӡ�ո������
                    {
                        printf(" ");
                    }
                    printf("*");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
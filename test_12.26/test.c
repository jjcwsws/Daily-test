#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
// KiKi�ж������Ǿ���
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    int arr[100][100] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;//��ʼ��־
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)//��������
                flag = 0;
        }
        if (flag == 0)//����ѭ�������ٱ���ʱ��
            break;
    }
    if (flag == 0)
        printf("NO");
    else
        printf("YES");
    return 0;
}
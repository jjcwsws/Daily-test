#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//��������ж�
//#include <stdio.h>
//int main() {
//    int arr[10][10] = { 0 };
//    int arr1[10][10] = { 0 };
//    int a = 0;
//    int b = 0;
//    int count = 0;
//    scanf("%d%d", &a, &b);
//    //����
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        int j = 0;
//        for (j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < a; i++)
//    {
//        int j = 0;
//        for (j = 0; j < b; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//            //�ж�
//            if (arr[i][j] == arr1[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    //���
//    if (count == a * b)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}
//�������
//#include <stdio.h>
//int main() {
//    int arr[20][20];
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    //�������ң�������ʼ���
//    int up = 0, down = n - 1, left = 0, right = n - 1;
//    int val = 1;//����ֵ����ʼ��
//    while (val <= n * n)
//    {
//        //ÿ�λ��εĵ�һ��
//        for (i = left; i <= right; i++)
//        {
//            arr[up][i] = val++;
//        }
//        up++;
//        //ÿ�λ��ε����һ��
//        for (i = up; i <= down; i++)
//        {
//            arr[i][right] = val++;
//        }
//        right--;
//        //ÿ�λ��ε����һ��
//        for (i = right; i >= left; i--)
//        {
//            arr[down][i] = val++;
//        }
//        down--;
//        //ÿ�λ��εĵ�һ��
//        for (i = down; i >= up; i--)
//        {
//            arr[i][left] = val++;
//        }
//        left++;//��Ϊ��һ�λ��ε���ʼ��
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//���ξ���
#include <stdio.h>
int main() {
    int arr[1000][1000];
    int n = 0;
    scanf("%d", &n);
    int i = 0, j = 0;
    int count = 0;//ѭ������
    int val = 1;//��ʼ��
    int flag = 1;//�������η���
    while (count < 2 * n - 1) {
        for (i = 0; i <= count; i++)
        {
            for (j = 0; j <= count; j++)
            {
                if (i + j == count && i < n && j < n)//���ܳ���������±귶Χ
                {
                    if (flag == 1)
                        arr[j][i] = val++;
                    else
                        arr[i][j] = val++;
                }
            }
        }
        count++;
        flag = -flag;//�ı����η���
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//ɸѡ��������
//#include <stdio.h>
//int main() {
//    int a = 0;
//    while (~scanf("%d", &a))
//    {
//        int i = 0;
//        int arr[100] = { 0 };
//        int count = 0;
//        for (i = 2; i <= a; i++)
//        {
//            arr[i - 2] = i;//�洢
//        }
//        for (i = 0; i <= a - 2; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= a - 2 - i; j++)
//            {
//                if (arr[i + j] % (i + 2) == 0 && arr[i + j] != 0)//�����������Ԫ��֮������ܱ������������ܹ�������������0�󣬲���Ӱ�쵽���������ж�
//                {
//                    arr[i + j] = 0;
//                    count++;
//                }
//            }
//        }
//        for (i = 0; i < a - 1; i++)
//        {
//            if (arr[i] != 0)//��û��������������
//                printf("%d ", arr[i]);
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}
//�༶�ɼ��������
#include <stdio.h>
int main() {
    float arr[6][6] = { 0 };
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        float sum = 0.0;
        int j = 0;
        for (j = 0; j < 5; j++)
        {
            scanf("%f", &arr[i][j]);
            printf("%.1f ", arr[i][j]);
            sum += arr[i][j];//�����룬�ߴ�ӡ�������
        }
        arr[i][j] = sum;
        printf("%.1f\n", arr[i][j]);
    }
    return 0;
}
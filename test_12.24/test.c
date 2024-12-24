#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//矩阵相等判定
//#include <stdio.h>
//int main() {
//    int arr[10][10] = { 0 };
//    int arr1[10][10] = { 0 };
//    int a = 0;
//    int b = 0;
//    int count = 0;
//    scanf("%d%d", &a, &b);
//    //输入
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
//            //判断
//            if (arr[i][j] == arr1[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    //输出
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
//矩阵计算
//#include <stdio.h>
//int main() {
//    int arr[20][20];
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    //控制左右，上下起始起点
//    int up = 0, down = n - 1, left = 0, right = n - 1;
//    int val = 1;//填入值的起始点
//    while (val <= n * n)
//    {
//        //每次回形的第一行
//        for (i = left; i <= right; i++)
//        {
//            arr[up][i] = val++;
//        }
//        up++;
//        //每次回形的最后一列
//        for (i = up; i <= down; i++)
//        {
//            arr[i][right] = val++;
//        }
//        right--;
//        //每次回形的最后一行
//        for (i = right; i >= left; i--)
//        {
//            arr[down][i] = val++;
//        }
//        down--;
//        //每次回形的第一列
//        for (i = down; i >= up; i--)
//        {
//            arr[i][left] = val++;
//        }
//        left++;//作为下一次回形的起始行
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
//蛇形矩阵
#include <stdio.h>
int main() {
    int arr[1000][1000];
    int n = 0;
    scanf("%d", &n);
    int i = 0, j = 0;
    int count = 0;//循环计数
    int val = 1;//起始数
    int flag = 1;//区别蛇形方向
    while (count < 2 * n - 1) {
        for (i = 0; i <= count; i++)
        {
            for (j = 0; j <= count; j++)
            {
                if (i + j == count && i < n && j < n)//不能超出数组的下标范围
                {
                    if (flag == 1)
                        arr[j][i] = val++;
                    else
                        arr[i][j] = val++;
                }
            }
        }
        count++;
        flag = -flag;//改变蛇形方向
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
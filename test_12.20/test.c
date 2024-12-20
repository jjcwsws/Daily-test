#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//有序序列合并
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int i = 0;
//    int arr[1000] = { 0 };
//    int arr1[1000] = { 0 };
//    for (i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int j = 0;
//    for (j = 0; j < b; j++)
//    {
//        scanf("%d", &arr1[j]);
//    }
//    i = 0;//重新初始化0
//    j = 0;
//    while (i < a && j < b)
//    {
//        if (arr[i] < arr1[j])//谁小谁打印，并往后+1，继续比较
//        {
//            printf("%d ", arr[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr1[j]);
//            j++;
//        }
//    }
//    if (i == a)//看谁的先打印完，没打印完的接着打印
//    {
//        for (; j < b; j++)
//        {
//            printf("%d ", arr1[j]);
//        }
//    }
//    else {
//        for (; i < a; i++)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
// 序列中删除指定数字
//#include <stdio.h>
//int main() {
//    int a = 0;
//    int arr[50] = { 0 };
//    int b = 0;
//    scanf("%d", &a);
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &b);
//    for (i = 0; i < a; i++)
//    {
//        if (arr[i] == b);//相等啥也不打印
//        else
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
#include <stdio.h>
int main() {
    int count = 0;
    int a = 0;
    int arr[1000] = { 0 };
    int arr1[1000] = { 0 };
    scanf("%d", &a);
    int i = 0;
    int flag = 0;
    int k = 0;
    for (i = 0; i < a; i++)
    {
        int flag = 1;
        scanf("%d", &arr[i]);//边输入
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])//边比较，有重复则跳出，并做标志
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            arr1[k] = arr[i];//无重复的打印，重复的打印一次
            k++;
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}
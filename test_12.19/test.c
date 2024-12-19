#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//记数问题
//#include <stdio.h>
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int count = 0;
//    int i = 0;
//    for (i = 1; i <= a; i++)
//    {
//        int c = i;
//        while (c)//遍历该数
//        {
//            if (c % 10 == b)
//                count++;
//            c /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//逆序输出
//#include <stdio.h>
//int main() {
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//        getchar();
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//N个数之和
//#include <stdio.h>
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    int i = 0;
//    int arr[50] = { 0 };
//    int sum = 0;
//    for (i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < a; i++)
//    {
//        sum += arr[i];
//    }
//    printf("%d", sum);
//    return 0;
//}
//最高分与最低分之差
//#include <stdio.h>
//int main() {
//    int a = 0;
//    int i = 0;
//    scanf("%d", &a);
//    int arr[10000] = { 0 };
//    for (i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0];//初始值
//    int min = arr[0];
//    for (i = 0; i < a; i++)
//    {
//        if (arr[i] > max)//比较
//            max = arr[i];
//        else if (arr[i] < min)
//            min = arr[i];
//    }
//    printf("%d", max - min);
//    return 0;
//}
//争夺前五名
//#include <stdio.h>
//int main() {
//    int a = 0;
//    int i = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &a);
//    for (i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < a - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < a - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
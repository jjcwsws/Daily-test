#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    int n, m;
//    scanf("%d %d\n", &n, &m);
//    int i, j, arr[2000];
//    int tmp;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = n; i < n + m; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        for (j = 0; j < n + m - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
//
//int main()
//{
//    int a[55], n, flag1 = 0, flag2 = 0, i;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) 
//    {
//        scanf("%d", &a[i]);
//        if (i > 0)
//        {
//            if (a[i] < a[i - 1]) 
//            {
//                flag1 = 1;
//            }
//            else if (a[i] > a[i - 1]) 
//            {
//                flag2 = 1;
//            }
//        }
//    }
//    if (flag1 && flag2) printf("unsorted\n");
//    else printf("sorted\n");
//}
//
//int main()
//{
//    int year, month, day;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        switch (month)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("31\n");
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30\n");
//            break;
//        case 2: {
//            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//                printf("29\n");
//            else
//                printf("28\n");
//        }
//        }
//    }
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int m = 10;
//	//cosnt 可以修饰指针
//	int n  = 100;
//	const int * p = &m;
//	//*p = 0;//err
//	p = &n; //ok
//
//	printf("%d\n", m);
//
//	return 0;
//}

//
//int main()
//{
//	int m = 10;
//	//cosnt 可以修饰指针
//	int n = 100;
//	int * const p = &m;
//	*p = 0;//ok
//	p = &n; //err
//
//	printf("%d\n", m);
//
//	return 0;
//}
//

//模拟实现一个strlen函数
//assert
//const

//size_t 是专门为sizeof 设计的一个类型
//size_t  unsigned int / unsigned long 
//>=0
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}
//
//%u 无符号整数的
//
//

//
//int Add(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}
//

#include <stdio.h>

//
//////
////int main()
////{
////    i--;//-1
////    // int  size_t
////    //size_t size_t
////    //-1     4
////    //
////    if (i > sizeof(i))//-1 > 4
////    {
////        printf(">\n");
////    }
////    else
////    {
////        printf("<\n");
////    }
////
////    return 0;
////}
//
//
//
//
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//
//    int arr1[1000];
//    int arr2[1000];
//
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//
//    int arr3[2000];
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k++] = arr1[i++];
//        }
//        else
//        {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    if (i == n)
//    {
//
//        while (j < m)
//        {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    else
//    {
//
//        while (i < n)
//        {
//            arr3[k++] = arr1[i++];
//        }
//    }
//
//
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//
//    return 0;
//}
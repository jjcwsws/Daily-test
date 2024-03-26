#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//
//char acX[] = “abcdefg”;
//char acY[] = { ‘a’,’b’,’c’,’d’,’e’,’f’,’g’ };

//int main()
//{
//    int i = 0;
//    int a[] = { 3,2,10,4,8 };
//    int l = sizeof(a) / sizeof(a[0]);
//    int j = 0;
//    for (j = 0; j < l - 1; j++)  
//    {
//        for (i = 0; i < l - 1 - j; i++)  
//        {
//            if (a[i] >= a[i + 1])     
//            {
//                int t = 0;
//                t = a[i + 1];
//                a[i + 1] = a[i];
//                a[i] = t;
//            }
//        }
//
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d  ", a[i]);
//    }
//
//
//    return 0;
//}

//初始化函数
//void init(int a[], int sz) 
//{
//	int i;
//	for (i = 0; i < sz; i++) 
//	{
//		a[i] = 0;
//	}
//}
//
////打印函数
//void print(int arr[], int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////逆序函数
//void reverse(int a[], int sz) 
//{
//	int t;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) 
//	{
//		t = a[left];
//		a[left] = a[right];
//		a[right] = t;
//		left++;
//		right--;
//	}
//}
//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//int main() 
//{
//    
//    int A[5] = { 1,2,3,4,5 };
//    int B[5] = { 6,7,8,9,10 };
//    int temp = 0;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        temp = A[i];
//        A[i] = B[i];
//        B[i] = temp;
//    }
//    printf("A中交换后的元素为：");
//    for (i = 0; i < 5; i++) 
//    {
//        printf("%d ", A[i]);
//    }
//    printf("\n");
//    printf("B中交换后的元素为：");
//    for (i = 0; i < 5; i++) 
//    {
//        printf("%d ", B[i]);
//    }
//    printf("\n");
//}
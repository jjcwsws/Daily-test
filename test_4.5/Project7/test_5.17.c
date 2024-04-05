#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%p == %p\n", p+i, &arr[i]);
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//
//	//*(*pp) = 100;
//	**pp = 100;
//
//	printf("%d\n", a);
//
//	//int** * ppp = &pp;
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "cuihua";
//
//	char* parr[] = { arr1, arr2, arr3 };
//
//	char** p = parr;
//
//	return 0;
//}


//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "hello world";
//	//char arr3[] = "cuihua";
//

//	//char* parr[] = { arr1, arr2, arr3 };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%s\n", parr[i]);
//	//}
//
//	/*char arr[] = "abcdef";
//	printf("%s\n", arr);*/
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//

//	int* parr[] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			//printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//struct Stu
//{

//	char name[20];
//	int age;
//	char sex[5];
//} s2,s3,s4; 

//typedef struct Stu
//{

//	char name[20];
//	int age;
//	char sex[5];
//} Stu;
//
//int main()
//{
//	//int a = 10;
//	struct Stu s1;
//	Stu s2;
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	//int a = 10;
//	struct Stu s1;
//	//Stu s2;
//
//	return 0;
//}
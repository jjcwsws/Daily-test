#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int arr1[10];
//	int count = 10;
//	int arr2[count];

//	return 0;
//}

//int main()
//{
//	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int arr2[10] = { 1,2,3 };
//	//int arr3[10] = { 0 };
//	//int arr4[] = { 0 };
//	//int arr5[] = { 1,2,3 };
//	//int arr6[];//err
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	char arr3[] = { 'a', 98, 'c' };
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", arr[0]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", arr[0]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	for (i = 0; i < sz; i+=2)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", arr[0]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	for (i = sz-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
// 
//	return 0;
//}
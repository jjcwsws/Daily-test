#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr1[10];
//	int count = 10;
//	int arr2[count];//�������ʽ�ſ���
//	//VS2019 VS2022 ������IDE ��֧��C99 �еı䳤����
//
//	//C99 ��׼֮ǰ ����Ĵ�Сֻ���ǳ������ʽ
//	//C99 ��׼�������ˣ��䳤����ĸ��ʹ�������ڴ�����ʱ�����ʹ�ñ������������������鲻�ܳ�ʼ��
//
//	return 0;
//}

//int main()
//{
//	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//	//int arr2[10] = { 1,2,3 };//����ȫ��ʼ����ʣ���Ԫ��Ĭ�϶���0
//	//int arr3[10] = { 0 };//����ȫ��ʼ����ʣ���Ԫ��Ĭ�϶���0
//	//int arr4[] = { 0 };//ʡ������Ĵ�С����������ʼ��������Ĵ�С�Ǹ��ݳ�ʼ����������ȷ��
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
//	//printf("%d\n", arr[5]);//[] �±����ò�����
//	//printf("%d\n", arr[0]);//[] �±����ò�����
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
//	//printf("%d\n", arr[5]);//[] �±����ò�����
//	//printf("%d\n", arr[0]);//[] �±����ò�����
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
//	//printf("%d\n", arr[5]);//[] �±����ò�����
//	//printf("%d\n", arr[0]);//[] �±����ò�����
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

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[5]);//[] �±����ò�����
//	//printf("%d\n", arr[0]);//[] �±����ò�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = {0};//10 * 4
//	printf("%d\n", sizeof(arr));//40 - �������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ����ķ���
//	printf("%d\n", sz);
//
//	return 0;
//}
//


//%p  --  ��������ӡ��ַ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	//����Ĵ���
//	int arr[4][5];
//	char ch[3][8];
//
//	return 0;
//}
//

//
//int main()
//{
//	//����ĳ�ʼ��
//	int arr[4][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{5,6,7,8,9} };
//	int arr2[4][5] = { {1,2,3 }, {2, 3, 4 }, {3, 4, 5, 6, 7}, {5, 6, 7, 8, 9} };
//	//��ά���鼴ʹ��ʼ������
//	//���ǿ���ʡ�Եģ��������ǲ���ʡ�Ե�
//	int arr3[][5] = { {1,2,3 }, {2, 3, 4 }, {3, 4, 5, 6, 7}, {5, 6, 7, 8, 9} };
//
//	return 0;
//}
//

//int main()
//{
//	int arr[4][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{5,6,7,8,9} };
//	//printf("%d\n", arr[2][3]);
//	int i = 0;
//	//�к�
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//0 1 2 3 4
//		}
//		printf("\n");
//	}
//	return 0;
//}
//


//
//int main()
//{
//	int arr[4][5] = { 0 };
//	int i = 0;
//	//�к�
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//0~10
//	//Խ�����
//	//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//

//����10������������������������
//�����кܶ�ķ���
//1. ð������
//2. ѡ������
//3. ��������
//4. ��������
//....

//void bubble_sort(int arr[10])
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//���� - ����
//	bubble_sort(arr);//������������������arr�����ݵ�����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//void bubble_sort(int arr[10], int sz)//�����arr�ı�����ָ��
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//һ��ÿ���ȽϵĶ���
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}


void bubble_sort(int* arr, int sz)//�����arr�ı�����ָ��
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//ÿһ�˿�ʼǰ�ͼ����Ѿ�������
		int flag = 1;
		//һ��ÿ���ȽϵĶ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}

		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[10] = { 0 };
	//����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	//ð������ - ����
	//����
	//arr��Ϊ��������˴���
	//���鴫�Σ����ݵ��ǵ�ַ,���ݵ�����Ԫ�صĵ�ַ
	//
	bubble_sort(arr, sz);//arr ��������Ԫ�صĵ�ַ

	//���
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}





//
//����������ô��⣿
//������ͨ������¾���������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)����������������sizeof()�ڲ����������������ʾ�������飬���������������Ĵ�С
//2. &�������������������Ҳ��ʾ�������飬����ȡ��������������ĵ�ַ
//����֮����������������������ʾ������Ԫ�صĵ�ַ
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);//+1��������������
//
//	//printf("%d\n", sizeof(arr));
//	return 0;
//}
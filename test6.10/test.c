#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 10;//����
//	int arr[10];//����
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	//int arr[10];
//	int* p = (int*)malloc(40);
//
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//���ٳɹ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//
//	//int a = 10;
//	//int* ptr = &a;
//	//free(ptr);//err
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(INT_MAX, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//��ӡ����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//��ʼ��Ϊ1~10
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		p[i] = i + 1;
//	}
//	//����һЩ�ռ�
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//��ӡ����
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	//�Զ�̬���ٿռ��Խ�����
//	for (i = 0; i < 20; i++)
//	{
//		p[i] = i;//Խ�����
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);
//	//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//4. ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//5. ��ͬһ�鶯̬�ڴ����ͷ�

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//
//	free(p);
//	p = NULL;
//
//	free(p);
//	return 0;
//}


void test()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}

int main()
{
	test();
	//
	while (1);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//ģ��ʵ�ֿ⺯����strcpy
//�����ַ�����
//
#include <string.h>

//
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;// \0 �Ŀ���
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	//printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}



#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	//����
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;// \0 �Ŀ���
//}

//�������ص���Ŀ��ռ����ʼ��ַ
//const ����ָ���ʱ��
//��const ����*����ߵ�ʱ�����Ƶ���ָ��ָ������ݣ�����ͨ��ָ������ı�ָ��ָ������ݣ�����ָ������ı����ǿ��Ըı��
//��const ����*���ұߵ�ʱ�����Ƶ���ָ���������ָ������ı����ǲ��ܸı�ģ�����ָ��ָ��������ǿ���ͨ��ָ�����ı��
//
//char* my_strcpy(char* dest, const char * src)
//{
//	char* ret = dest;
//	//����
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++) 
//		;//�����
//
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxxx";
//	char* p = NULL;
//
//	//my_strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}



//
//int main()
//{
//	//int num = 10;
//	//num = 20;
//
//	//int* p = &num;
//	//*p = 200;
//
//
//	const int n = 100;
//	//n = 200;//err
//
//	const int* p = &n;
//	*p = 20;//
//
//	printf("%d\n", n);
//
//	return 0;
//}
//


//const ����ָ���ʱ��
//��const ����*����ߵ�ʱ�����Ƶ���ָ��ָ������ݣ�����ͨ��ָ������ı�ָ��ָ������ݣ�����ָ������ı����ǿ��Ըı��
//��const ����*���ұߵ�ʱ�����Ƶ���ָ���������ָ������ı����ǲ��ܸı�ģ�����ָ��ָ��������ǿ���ͨ��ָ�����ı��

//int main()
//{
//	int m = 10;
//	//cosnt ��������ָ��
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
//	//cosnt ��������ָ��
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

//ģ��ʵ��һ��strlen����
//assert
//const

//size_t ��ר��Ϊsizeof ��Ƶ�һ������
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
//%u �޷���������
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

//int i;//ȫ�ֱ������������ʼ����Ĭ����0
////
////��̬������ȫ�ֱ������������ʼ����Ĭ����0
////
//int main()
//{
//    i--;//-1
//    // int  size_t
//    //size_t size_t
//    //-1     4
//    //
//    if (i > sizeof(i))//-1 > 4
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//
//    return 0;
//}




int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    //�䳤����
    int arr1[1000];
    int arr2[1000];
    int i = 0;
    //��һ������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //�ڶ�������
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //�ϲ�
    int arr3[2000];
    i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    if (i == n)
    {
        //arr1�������ˣ���Ҫ��arr2��ʣ���Ԫ��ȫ������arr3��
        while (j < m)
        {
            arr3[k++] = arr2[j++];
        }
    }
    else
    {
        //arr2�������ˣ���Ҫ��arr1��ʣ���Ԫ��ȫ������arr3��
        while (i < n)
        {
            arr3[k++] = arr1[i++];
        }
    }

    //���
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}










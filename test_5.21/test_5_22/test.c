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
//模拟实现库函数：strcpy
//拷贝字符串的
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
//	*dest = *src;// \0 的拷贝
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
//	//断言
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;// \0 的拷贝
//}

//函数返回的是目标空间的起始地址
//const 修饰指针的时候
//当const 放在*的左边的时候，限制的是指针指向的内容，不能通过指针变量改变指针指向的内容，但是指针变量的本身是可以改变的
//当const 放在*的右边的时候，限制的是指针变量本身，指针变量的本身是不能改变的，但是指针指向的内容是可以通过指针来改变的
//
//char* my_strcpy(char* dest, const char * src)
//{
//	char* ret = dest;
//	//断言
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++) 
//		;//空语句
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


//const 修饰指针的时候
//当const 放在*的左边的时候，限制的是指针指向的内容，不能通过指针变量改变指针指向的内容，但是指针变量的本身是可以改变的
//当const 放在*的右边的时候，限制的是指针变量本身，指针变量的本身是不能改变的，但是指针指向的内容是可以通过指针来改变的

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

//int i;//全局变量，如果不初始化，默认是0
////
////静态变量和全局变量，如果不初始化，默认是0
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

    //变长数组
    int arr1[1000];
    int arr2[1000];
    int i = 0;
    //第一行数据
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //第二行数据
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //合并
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
        //arr1遍历完了，需要将arr2中剩余的元素全部放在arr3中
        while (j < m)
        {
            arr3[k++] = arr2[j++];
        }
    }
    else
    {
        //arr2遍历完了，需要将arr1中剩余的元素全部放在arr3中
        while (i < n)
        {
            arr3[k++] = arr1[i++];
        }
    }

    //输出
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}










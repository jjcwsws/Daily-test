#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
////
////offsetof - 宏 -全小写
////
//
//int main()
//{
//	int c = MAX(3, 5);
//	printf("%d\n", c);
//#undef MAX
//	c = MAX(5, -5);
//	printf("%d\n", c);
//
//
//	return 0;
//}
//

// #include <stdio.h>

// int main()
// {
// 	int arr[SZ];
// 	int i = 0;
// 	for(i=0; i<SZ; i++)
// 	{
// 		arr[i] = i+1;
// 	}

// 	for(i=0; i<SZ; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return 0;
// }

// #include <stdio.h>

// #define M 2
// int main()
// {
// #if M==1
// 	printf("hehe\n");
// #elif M==2
// 	printf("haha\n");
// #else
// 	printf("heihei\n");
// #endif

// 	return 0;
// }


//#define WIN 0

// int main()
// {
// // #if defined(WIN)
// // 	printf("windows");
// // #endif

// #ifdef WIN
// 	printf("windows");
// #endif


// 	return 0;
// }

//#define WIN 0

// int main()
// {
// // #if !defined(WIN)
// // 	printf("windows\n");
// // #endif
// #ifndef WIN
// 	printf("windows\n");
// #endif

// 	return 0;
// }

#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"

int main()
{

	return 0;
}



//#define M 0
//int main()
//{
//#if M==1
//	printf("hehe\n");
//#endif
//	return 0;
//}


//#define WIN 0
//
//int main()
//{
//#if defined(WIN)
//	printf("windows");
//#endif
//
//
//	return 0;
//}
//

//#if 0
//
//int main()
//{
//	;
//	return 0;
//}
//
//#endif
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//
//int main()
//{
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}
//

//#include "test.h"

//#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//typedef struct {
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//
//int main()
//{
//	printf("%zd\n", sizeof(AA_t));
//	return 0;
//}


#pragma pack(4)
/*编译选项，表示4字节对齐 平台：VS2019。语言：C语言*/
//假设long 是4个字节
//int main(int argc, char* argv[])
//{
//    struct tagTest1 //12
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2 //12
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;//0~1
//        //2~3
//        long b;//4~7
//        char d;//8
//        //9 10 11
//        long a;//12~15
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()
//
//
//#define A 2
//#define B 3
//
//#define MAX_SIZE A+B
//
//struct _Record_Struct
//{
//	//1
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	//1
//	unsigned char state;
//	//1
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//int main()
//{
//	printf("%d\n", sizeof(struct _Record_Struct) * MAX_SIZE);
//	//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * 2+3);
//
//
//	return 0;
//}

//在X86下，小端字节序存储

//#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}
//
//#include <string.h>
//
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}
//
//#pragma pack(4)
//struct A
//{
//    int a;
//    short b;
//    int c;
//    char d;
//};
//
//struct B
//{
//    int a;
//    short b;
//    char c;
//    int d;
//};
//#pragma pack()
//
//int main()
//{
//    printf("%d %d\n", sizeof(struct A), sizeof(struct B));
//
//    return 0;
//}





//找出单身狗-版本1
//有一个数组只有一个数组出现一次，其余数字都是成对出现的
//请找出只出现一次的数字
//1 2 3 4 5 1 2 3 4

//异或法
//异或：相同为0，相异为1
//a^a = 0
//0^a = a
//异或是支持交换律
//3^5^3 = 5
//011
//101
//110
//011
//101
//3^3^5 = 5
//
//
//int find_single_dog1(int arr[], int sz)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,7,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog = find_single_dog1(arr, sz);
//	printf("%d\n", dog);
//
//	return 0;
//}
//1 1 2 2 3 3 4 4 7


//找出单身狗版本2
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。、
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.

//
//void find_single_dog2(int arr[], int sz, int*pd1, int*pd2)
//{
//	//1. 所有数字异或在一起
//	int ret = 0;//5 ^ 6
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2. 计算ret的第几位是1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
// 
//	//计算数组中元素的第pos为1的异或
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//	}
//	//计算数组中元素的第pos为0的异或
//	*pd2 = ret ^ *pd1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,8 };
//	int dog1 = 0;
//	int dog2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_single_dog2(arr, sz, &dog1, &dog2);
//
//	printf("%d %d", dog1, dog2);
//
//	return 0;
//}
//

#include <stdlib.h>
//1. 空指针
//2. 空字符串
//3. 空白字符
//4. 数字超过范围
//
//#include <ctype.h>
//
//#include <assert.h>
//
//enum State
//{
//	VALID,
//	INVALID
//}state = INVALID;//全局的状态，它的值标志返回的是合法的值还是异常的值
//
//
//int my_atoi(const char* str)
//{
//	int flag = 1;
//	assert(str);
//	if (*str == '\0')//空字符串
//	{
//		return 0;
//	}
//	//跳过空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//处理正负号的问题
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	else if (*str == '+')
//	{
//		str++;
//	}
//	long long ret = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag*(*str - '0');
//			//'1'-'0' = 49-48=1
//			//'5'-'0' = 5
//			if (ret<INT_MIN || ret >INT_MAX)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return (int)ret;
//		}
//		str++;
//	}
//	state = VALID;
//	return (int)ret;
//}
//
//int main()
//{
//	int ret = my_atoi("");
//	if (state == VALID)
//		printf("%d\n", ret);
//	else
//		printf("非法返回：%d", ret);
//
//	return 0;
//}
//

//<剑指offer>


//
//#define INT_PTR int*
//typedef int* int_ptr;
//
//
//int main()
//{
//	INT_PTR a, b;//b是整型，a是指针类型
//	int *a, b;//b是整型，a是指针类型
//
//	int_ptr c, d;//c和d都是指针类型
//
//	int* pa, *pb, *pc;
//
//	int* pa;
//	int* pb;
//	int* pc;
//
//	return 0;
//}


//#define N 4
//
//#define Y(n) ((4+2)*5 + 1) /*这种定义在编程规范中是严格禁止的*/
//
//
//
//则执行语句：z = 2 * (4 + ((4 + 2) * 5 + 1)); 后，z的值为（   ）
//
//题目内容：
//A.出错
//B .60
//C .48
//D .70

//#define A 2+2
//#define B 3+3
//#define C A*B
//
//int main()
//{
//	printf("%d\n", A * B);
//	return 0;
//}

//
//int g_val = 2023;
//
//
//
//int main()
//{
//
//	return 0;
//}

#include <stddef.h>

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type, member)    (size_t)&( ((type*)0)->member)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}
//


//#define SWAP(n)  (n=((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))
//
////-120
////10000000000000000000000001111000
////11111111111111111111111110000111
////111111111111111111111111 10001000
////11111111111111111111111101000100
////11111111111111111111111101000011
////10000000000000000000000010111100
//
//int main()
//{
//	int n = -120;
//	//1010
//	//0101 - 5
//	SWAP(n);
//	printf("%d\n", n);
//	SWAP(n);//10
//	printf("%d\n", n);
//	return 0;
//}
//

//下节课测评



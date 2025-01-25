#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//偏移量：相较于起始地址的偏移，即成员地址与起始地址之差的字节数;
//那么假设起始地址为0地址处，那么任何成员的地址就是偏移量，即成员地址与起始地址之差等于本身;
//偏移量﻿
//#define OFFSETOF(type, member) (size_t)&(((type*)0)->member)
//struct S {
//	char i;
//	int a;
//	char b;
//};
//int main()
//{
//	printf("偏移量为：%zu", OFFSETOF(struct S, a));
//	return 0;
//}

//取出偶数位向右移一位，取出奇数位向左移一位，然后再相加
//n的偶数位&1,奇数位&0，可以得到偶数位，即n&(10101010101010101010101010101010）->n&(0xaaaaaaaa)
//n的偶数位&0，奇数位&1，可以得到奇数位，即n&(01010101010101010101010101010101)->n&(0x55555555)
//最后再相加，即可得到奇偶位交换
//#define SWAP(n) (((n)&(0xaaaaaaaa))>>1) + (((n)&(0x55555555))<<1)
//int main()
//{
//	int a = SWAP(5);
//	printf("%d", a);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main() {
//    //密码长度是否大于8位以及不能数字开头
//    int n = 0;
//    scanf("%d", &n);
//
//    while (n--)
//    {
//        char ch[100];
//        scanf("%s", ch);
//        getchar();
//        int len = strlen(ch);
//        if (len < 8 || ch[0] >= 0 && ch[0] <= 9)
//        {
//            printf("NO\n");
//            continue;
//        }
//        //是否符合至少出现三种类型中的两种
//        int i = 0;
//        int flag1 = 0;//用来标记字符是否都是大写
//        int flag2 = 0;//用来标记字符是否都是小写
//        for (i = 0; i < len; i++)
//        {
//            if (ch[i] >= 'A' && ch[i] <= 'Z')
//                flag1++;
//            if (ch[i] >= 'a' && ch[i] <= 'z')
//                flag2++;
//        }
//        if (flag1 == len || flag2 == len)
//        {
//            printf("NO\n");
//        }
//        else
//        {
//            printf("YES\n");
//        }
//    }
//
//    return 0;
//}


//int* findErrorNums(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    int* a = (int*)malloc(sizeof(int*) * 2);
//    int* count = (int*)malloc(sizeof(int*) * numsSize);
//    memset(count, 0, sizeof(int*) * numsSize);//初始化count
//    //出现重复数字进行累加
//    for (i = 0; i < numsSize; i++)
//    {
//        count[nums[i]]++;
//    }
//    int flag1 = 0, flag2 = 0;
//    for (i = 1; i <= numsSize; i++)
//    {
//        if (flag1 && flag2)//找到重复数字跳出循环
//            break;
//        if (count[i] == 2)
//        {
//            a[0] = i;
//            flag1 = 1;
//        }
//        if (count[i] == 0)
//        {
//            a[1] = i;
//            flag2 = 1;
//        }
//    }
//    *returnSize = 2;
//    return a;
//}
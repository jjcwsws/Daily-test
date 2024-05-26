#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int num1 = -1;
//	unsigned int num2 = -1;
//
//	//printf("%d\n", num1);
//	//printf("%d\n", num2);
//
//	printf("%u\n", num1);
//	printf("%u\n", num2);
//
//	return 0;
//}

//https://www.nowcoder.com/practice/f0db4c36573d459cae44ac90b90c6212?tpId=182&tqId=34789&ru=/exam/oj
#include <stdio.h>
#include <stdio.h>

int is_exists(char ch, char arr[])
{
    int j = 0;
    while (arr[j])
    {
        if (ch == arr[j])
            return 1;
        j++;
    }
    return 0;
}

int main()
{
    char arr1[110] = { 0 };
    char arr2[110] = { 0 };
    //输入
    gets(arr1);
    gets(arr2);

    //输出
    int i = 0;
    while (arr1[i])
    {
        //判断，arr1[i]是否在arr2中出现
        if (is_exists(arr1[i], arr2) == 0)
            printf("%c", arr1[i]);
        i++;
    }
    return 0;
}
//https://www.nowcoder.com/practice/f51c317e745649c0900996fd3f683aed?tpId=290&tqId=39934&ru=/exam/oj
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    char arr[14] = { 0 };
//    //输入
//    scanf("%d", &n);//1234567
//    int i = 0;
//    int k = 0;
//    //[7 6 5 , 4 3 2 , 1]
//    //计算
//    while (n)
//    {
//        if (k != 0 && k % 3 == 0)
//        {
//            arr[i++] = ',';
//        }
//        arr[i++] = n % 10 + '0';
//        n = n / 10;
//        k++;
//    }
//
//    //输出
//    for (i--; i >= 0; i--)
//    {
//        printf("%c", arr[i]);
//    }
//
//    return 0;
//}
//
//



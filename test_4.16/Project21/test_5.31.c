#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int n = 9;
//	//
//	//0 00000000 00000000000000000001001
//	//S  E        M
//	//0  -126     0.00000000000000000001001
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	//
//	float* pFloat = (float*)&n;
//
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001 * 2^3
//	//(-1)^0 * 1.001 * 2^3
//	//S=0     E=3  M=1.001
//	//0 10000010 00100000000000000000000
//	//
//	printf("num的值为：%d\n", n);//1091567616
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//
//	return 0;
//}
// 

//
//
//int main()
//{
//	float f = 5.5;
//	//101.1
//	//1.011 * 2^2
//	//(-1)^0 *1.011 * 2^2
//	//S = 0
//	//M = 1.011
//	//E = 2
//	//0100 0000 1011 0000 0000000000000000
//	//0x40b00000
//	return 0;
//}
//
//


#include <stdio.h>

/*
int main() {
    int n = 0;
    scanf("%d", &n);
    //int arr[n];
    int arr[50] = {0};
    int i = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag1 = 0;
    int flag2 = 0;
    for(i=0; i<n-1; i++)
    {
        if(arr[i] < arr[i+1])
            flag1 = 1;
        else if(arr[i] > arr[i+1])
            flag2 = 1;
    }
    if(flag1 + flag2 == 2)
        printf("unsorted\n");
    else
        printf("sorted\n");
    return 0;
}*/

//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    //int arr[n];
//    int arr[50] = { 0 };
//    int flag1 = 0;
//    int flag2 = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i >= 1)
//        {
//            if (arr[i] < arr[i - 1])
//                flag1 = 1;
//            else if (arr[i] > arr[i - 1])
//                flag2 = 1;
//        }
//    }
//    if (flag1 + flag2 == 2)
//        printf("unsorted\n");
//    else
//        printf("sorted\n");
//    return 0;
//}

#include <stdio.h>

//平年
//1  2  3  4  5  6  7  8  9  10 11 12
//31 28 31 30 31 30 31 31 30 31 30 31
//   29
// int get_days_of_month(int y, int m)
// {
//     int d = 0;
//     switch(m)
//     {
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             d = 31;
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             d = 30;
//             break;
//         case 2:
//         {
//             d = 28;
//             if((y%4==0&& y%100!=0) || (y%400==0))
//                 d += 1;
//         }
//     }
//     return d;
// }
//
//int get_days_of_month(int y, int m)
//{
//    int d = 0;
//    int days[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//    d = days[m];
//    if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && m == 2)
//        d += 1;
//    return d;
//}
//
//int main()
//{
//    int y = 0;
//    int m = 0;
//
//    while (scanf("%d %d", &y, &m) == 2)
//    {
//        int d = get_days_of_month(y, m);
//        printf("%d\n", d);
//    }
//
//    return 0;
//}
//






//int main()
//{
//    int n;
//    printfn("%d\n", n);
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//
//int main()
//{
//    unsigned long pulArray[] = { 6,7,8,9,10 };
//    unsigned long* pulPtr;
//    pulPtr = pulArray;
//
//    *(pulPtr + 3) += 3;
//    printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////int main()
////{
////	int a = 10;
////	printf("a=%d\n", a); 
////	return 0;
////}
////
////#include <stdio.h>
////
////int main()
////{
////    long long a, b;
////    scanf("%lld %lld", &a, &b);
////    long long m = a > b ? a : b;
////    while (1)
////    {
////        if (m % a == 0 && m % b == 0)
////        {
////            break;
////        }
////        m++;
////    }
////    printf("%lld\n", m);
////
////    return 0;
////}
////
////
////
////#include <stdio.h>
////
////int main()
////{
////    long long a, b;
////    scanf("%lld %lld", &a, &b);
////    int i = 1;
////    while (a * i % b)
////    {
////        i++;
////    }
////    printf("%lld\n", a * i);
////
////    return 0;
////}
//
//
////#include <stdio.h>
////
////int main() {
////    char arr[101];
////    //scanf("%s", arr);
////    //gets(arr);
////    //fgets(arr, 100, stdin);
////    printf("%s\n", arr);
////    return 0;
////}
//
//
//#include <stdio.h>
//void reverse(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//
//int main() {
//    char arr[101];
//    gets(arr);
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//    char* start = arr;
//    char* cur = arr;
//
//    while (*cur) {
//        while (*cur != ' ' && *cur != '\0')
//        {
//            cur++;
//        }
//        reverse(start, cur - 1);
//        start = cur + 1;
//        if (*cur == ' ')
//            cur++;
//    }
//    printf("%s\n", arr);
//    return 0;
//}
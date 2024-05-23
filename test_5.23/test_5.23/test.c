#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a); 
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    long long a, b;
//    scanf("%lld %lld", &a, &b);
//    //求最小公倍数
//    long long m = a > b ? a : b;//假设a 和 b的较大值是最小公倍数
//    while (1)
//    {
//        if (m % a == 0 && m % b == 0)
//        {
//            break;
//        }
//        m++;
//    }
//    printf("%lld\n", m);
//
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//    long long a, b;
//    scanf("%lld %lld", &a, &b);
//    //求最小公倍数
//    int i = 1;
//    while (a * i % b)
//    {
//        i++;
//    }
//    printf("%lld\n", a * i);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    char arr[101];
//    //scanf("%s", arr);
//    //gets(arr);
//    //fgets(arr, 100, stdin);
//    printf("%s\n", arr);
//    return 0;
//}

//https://www.nowcoder.com/questionTerminal/d1205615a0904bc39e9e627e7cb9e899
#include <stdio.h>
void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}


//https://www.nowcoder.com/questionTerminal/8869d99cf1264e60a6d9eff4295e5bab

//函数逆序字符串
int main() {
    char arr[101];
    //scanf("%s", arr);
    gets(arr);//读取一个字符串，即使中间有空格
    //scanf("%[^\n]s", arr);
    int len = strlen(arr);
    reverse(arr, arr + len - 1);
    //逆序每个单词
    char* start = arr;
    char* cur = arr;

    while (*cur) {
        while (*cur != ' ' && *cur != '\0')
        {
            cur++;
        }
        reverse(start, cur - 1);
        start = cur + 1;
        if (*cur == ' ')
            cur++;
    }
    printf("%s\n", arr);
    return 0;
}


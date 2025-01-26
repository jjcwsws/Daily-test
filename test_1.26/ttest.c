#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//int main() {
//    //ÊäÈë
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int m = 0;
//    float sum = 0.0;
//    int count1 = 0;
//    int count2 = 0;
//    while (n--)
//    {
//        scanf("%d", &m);
//        if (m > 0)
//        {
//            sum += m;
//            count1++;
//        }
//        if (m < 0)
//            count2++;
//    }
//    if (count1 == 0)
//        printf("%d %.1f", count2, sum);
//    else
//        printf("%d %.1f", count2, sum / count1);
//    return 0;
//}

#include <stdio.h>
int main() {
    int m = 0;
    scanf("%d", &m);
    int i = 0;
    int sum = m * (m - 1) + 1;
    printf("%d", sum);
    for (i = 1; i < m; i++)
    {
        sum += 2;
        printf("+%d", sum);
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//�жϴʻ���
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//int main() {
//    char a[100];
//    scanf("%s", a);
//    int i = 0;
//    int j = 0;
//    int min = 100;
//    int max = 0;
//    for (i = 0; i < strlen(a); i++)
//    {
//        int count = 0;
//        for (j = 0; j < strlen(a); j++)
//        {
//            if (a[i] == a[j])
//                count++;
//        }
//        if (count > max)
//            max = count;
//        else if (count < min)
//            min = count;
//    }
//
//    int flag = 1;
//    for (i = 2; i <= sqrt(max - min); i++)
//    {
//        if ((max - min) % i == 0)
//        {
//            printf("No Answer\n");
//            printf("%d", max - min);
//            flag = 0;
//            break;
//        }
//    }
//    if (flag = 1)
//    {
//        if (max - min == 0 || max - min == 1)
//        {
//            printf("No Answer\n");
//            printf("0");
//        }
//        else
//        {
//            printf("Lucky Word\n");
//            printf("%d", max - min);
//        }
//           
//    }
//    return 0;
//}
////��Ӷ���
//#include <stdio.h>
//int main()
//{
//    char arr[20];
//    scanf("%s", arr);
//    int i = 0;
//    int n = strlen(arr);
//    for (i = 1; i <= n; i++)
//    {
//        printf("%c", arr[i - 1]);
//        if ((n - i) % 3 == 0 && i != n)
//            printf(",");
//    }
//}
//��ѡ�糤
//#include <stdio.h>
//#include <string.h>
//int main() {
//    char arr[20];
//    scanf("%s", arr);
//    int i = 0;
//    int a = strlen(arr);
//    int count1 = 0;
//    int count2 = 0;
//    for (i = 0; i < a; i++)
//    {
//        if (arr[i] == 'A')
//            count1++;
//        else if (arr[i] == 'B')
//            count2++;
//    }
//    if (count1 > count2)
//        printf("A");
//    else if (count1 < count2)
//        printf("B");
//    else
//        printf("E");
//    return 0;
//}
// �ַ�������
//#include <stdio.h>
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int l = 0;
//    int r = 0;
//    int i = 0;
//    char s[100], c1, c2;
//    getchar();
//    for (i = 0; i < n; i++)
//    {
//        scanf("%c", &s[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d%d", &l, &r);
//        getchar();
//        scanf("%c", &c1);
//        getchar();
//        scanf("%c", &c2);
//        int j = 0;
//        for (j = l - 1; j < r; j++)
//        {
//            if (s[j] == c1)
//            {
//                s[j] = c2;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        printf("%c", s[i]);
//
//    }
//    return 0;
//}
//��д����
//#include <stdio.h>
//#include <string.h>
//int main() {
//    char s[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < 100; i++)
//    {
//-        scanf("%c", &s[i]);
//    }
//    int a = strlen(s);
//    if (s[0] >= 'a' && s[0] <= 'z')//�����һ����ĸ
//    {
//        printf("%c", s[0] - 32);
//    }
//    else if (s[0] >= 'A' && s[0] <= 'Z')
//        printf("%c", s[0]);
//    for (i = 0; i < a; i++)
//    {
//       
//        if (s[i] == ' ')//���ʣ�µ���ĸ
//        {
//            if (s[i + 1] >= 'a' && s[0] <= 'z')
//                printf("%c", s[i + 1] - 32);
//            else
//                printf("%c", s[i + 1]);
//        }
//    }
//    return 0;
//}
////��2
//#include <stdio.h>
//int main()
//{
//    char s[100];
//    while (scanf("%s", s) != EOF)//һ��һ��д��ȥ�����жϣ��������ȫ��д��ȥ�Ż��ĺܺ�
//    {
//        if (s[0] >= 'A' && s[0] <= 'Z')
//            printf("%c", s[0]);
//        else
//            printf("%c", s[0] - 32);
//    }
//    return 0;
//}
////С���ּ��㺯��
//#include <stdio.h>
//float max3(int a, int b, int c)
//{
//    return (a > b ? a : b) > c ? (a > b ? a : b) : c;
//}
//int main() {
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    float m = (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f", m);
//    return 0;
//}
////��λ����
//#include <stdio.h>
//int get_data(int a, int b)
//{
//    int i = 0;
//    int count = 0;
//    for (i = a; i <= b; i++)
//    {
//        int m = i;
//        int sum = 0;
//        while (m)
//        {
//            sum = sum + m % 10;//ÿλ�����
//            m = m / 10;
//        }
//        if (sum % 5 == 0 || sum % 10 == 0)
//            count++;
//    }
//    return count;
//}
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int c = get_data(a, b);
//    printf("%d", c);
//    return 0;
//}
////����һ��������������λ�ϵ����ֽ��мӺͣ��õ��µ���
//#include <stdio.h>
//int get_data(int a)
//{
//    int sum = 0;
//    while (a)
//    {
//        while (a)
//        {
//            sum = sum + a % 10;
//            a = a / 10;
//        }
//        if (sum > 10)//��������������ѭ��
//        {
//            a = sum;
//            sum = 0;
//        }
//    }
//    return sum;
//}
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    int b = get_data(a);
//    printf("%d", b);
//    return 0;
//}
//ţţ��������
#include <stdio.h>
#include <math.h>
int get_sum(int a, int b)
{
    int i = 0;
    int sum = 0;
    int j = 0;
    int count = 0;
    for (i = a; i <= b; i++)
    {
        count = 0;
        if (i == 2 || i == 3)
            sum = sum + 2;
        else
        {
            for (j = 2; j <= sqrt(i); j++)
            {
                if (i % j != 0)
                    count++;
                else
                    break;
            }
        }

        if (count == (int)sqrt(i) - 1)
        {
            sum = sum + i;
           
        }
    }
    return sum;
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = get_sum(a, b);
    printf("%d", sum);
    return 0;
}
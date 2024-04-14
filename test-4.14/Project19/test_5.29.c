#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test(int a[])
//{
//	a[0] = 3;
//	a[1] = 5;
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//void test(int *px, int *py)
//{
//	*px = 3;
//	*py = 5;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int x = 0;
//int y = 0;
//
//void test()
//{
//	x = 3;
//	y = 5;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test();
//
//	a = x;
//	b = y;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//

//void test()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//

#include <math.h>

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double num =Pow(n, k);
//
//	printf("%lf\n", num);
//	return 0;
//}
//
//

//DigitSum(1729)
//DigitSum(172) + 9
//DigitSum(17) 2 + 9
//DigitSum(1) + 7 + 2 + 9
//
//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//


//void reverse_string(char* s)
//{
//	int left = 0;
//	int right = strlen(s) - 1;
//
//	while (left<right)
//	{
//		char tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//		left++;
//		right--;
//	}
//}


//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//void reverse_string(char* s)
//{
//	if (*s == '\0')
//		return;
//	int len = my_strlen(s);
//	char tmp = s[0];
//	s[0] = s[len - 1];
//	s[len - 1] = '\0';
//	if (my_strlen(s + 1) >= 2)
//		reverse_string(s + 1);
//	s[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

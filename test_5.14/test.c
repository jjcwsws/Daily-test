#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 1;//1.初始化
//
//	while (i<=10)//2.判断
//	{
//		printf("%d ", i);
//		i++;//3.调整
//	}
//
//	return 0;
//}

//int main()
//{
//	int  i = 0;
//	for (i = 1; i <= 10; i++)
//	{ 
//		if (i == 5)
//			continue;
//		printf("%d ", i);	
//	}
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             0 1 2 3 4 5 6 7 8 9
//	//C99 标准中引入
//	//C++
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//初始化和调整部分的省略就是啥都不做
//	//判断部分省略了，意味着判断是恒为真的
//  //建议不要随便省略
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	//i=0 1 
//	for (i=0; i < 4; i++)
//	{
//		for (j=0; j < 4; j++)
//		{
//			printf("hehe\n");//1 2 3 4 
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{ }
//
//	//C99 支持的
//	for (int j = 0; j < 10; j++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = (b = 7);
//	return 0;
//}
//

//使用do while语句打印1~10

//int main()
//{
//	int i = 1;
//
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}

//计算 n的阶乘
//5! = 1*2*3*4*5
//n! = 1~n 累积想乘

//不考虑溢出
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//计算 1!+ 2!+ 3!+ …… + 10!

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3! = 1 + 2 + 6 = 9
//	//1!
//	//2! = 1*2
//	//3! = 1*2*3
//	//4! = 1*2*3*4
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3! = 1 + 2 + 6 = 9
//	//1!
//	//2! = 1*2
//	//3! = 1*2*3
//	//4! = 1*2*3*4
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//升序
//	int k = 17;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//升序
//	//printf("%d\n", sizeof(arr));//计算的数组的总大小，单位是字节
//	//printf("%d\n", sizeof(arr[0]));//4
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1
//	int left = 0;
//	int right = sz-1;
//	int flag = 0;//flag的作用是标志是否找到了
//	//2
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("找到了,下标是:%d\n", mid);
//			flag = 1;
//			break;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	//1 2
//	if (flag == 0)
//		printf("没找到\n");
//
//	return 0;
//}
//


//编写代码，演示多个字符从两端移动，向中间汇聚
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//welcome to bit!!!!!
//

//welcome to bit!!!!!
//###################
#include <string.h>
#include <windows.h>
//Sleep需要一个windows.h的头文件

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是毫秒
//		system("cls");//system函数可以执行系统命令，cls是清理屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//假设密码是:"123456"
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//判断密码是否正确
//		//两个字符串比较相等是不能使用==的，应该使用strcmp库函数
//		//strcmp返回0表示2个字符串相等
//		//strcmp返回>0的数字，表示第一个字符串大于第二个字符串
//		//strcmp返回<0的数字，表示第一个字符串小于第二个字符串
//		//
//		//abcd\0
//		//abcd\0
//		//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	//1 2
//	if (i == 3)
//		printf("退出程序\n");
//
//	return 0;
//}
//


//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	//1 2
//	if (flag == 0)
//		printf("退出程序\n");
//
//	return 0;
//}
//

//int main()
//{
//	char arr[] = "xxxxxxxxxx";
//	scanf("%s", arr);
//
//	return 0;
//}
//


char* interpret(char* command) {
    int i = 0;
    int len = strlen(command);
    char* ans = malloc((len + 1) * sizeof(char));
    int pos = 0;
    while (command[i])
    {
        if (command[i] == 'G')
            pos += sprintf(ans + pos, "%c", 'G');
        else
        {
            if (command[i] == '(' && command[i + 1] == ')')
                pos += sprintf(ans + pos, "%c", 'o');
            else
                pos += sprintf(ans + pos, "%s", "al");
        }

        i++;
    }
    printf("%s\n", ans);
    return ans;
}


int main()
{
	char arr[10] = "G()(al)";
    interpret(arr);

	return 0;
}


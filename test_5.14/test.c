#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 1;//1.��ʼ��
//
//	while (i<=10)//2.�ж�
//	{
//		printf("%d ", i);
//		i++;//3.����
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
//	//C99 ��׼������
//	//C++
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//��ʼ���͵������ֵ�ʡ�Ծ���ɶ������
//	//�жϲ���ʡ���ˣ���ζ���ж��Ǻ�Ϊ���
//  //���鲻Ҫ���ʡ��
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
//	//C99 ֧�ֵ�
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

//ʹ��do while����ӡ1~10

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

//���� n�Ľ׳�
//5! = 1*2*3*4*5
//n! = 1~n �ۻ����

//���������
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

//���� 1!+ 2!+ 3!+ ���� + 10!

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


//��һ�����������в��Ҿ����ĳ������n

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����
//	int k = 17;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����
//	//printf("%d\n", sizeof(arr));//�����������ܴ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));//4
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1
//	int left = 0;
//	int right = sz-1;
//	int flag = 0;//flag�������Ǳ�־�Ƿ��ҵ���
//	//2
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
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
//		printf("û�ҵ�\n");
//
//	return 0;
//}
//


//��д���룬��ʾ����ַ��������ƶ������м���
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
//Sleep��Ҫһ��windows.h��ͷ�ļ�

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
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");//system��������ִ��ϵͳ���cls��������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//����������:"123456"
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//�ж������Ƿ���ȷ
//		//�����ַ����Ƚ�����ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp�⺯��
//		//strcmp����0��ʾ2���ַ������
//		//strcmp����>0�����֣���ʾ��һ���ַ������ڵڶ����ַ���
//		//strcmp����<0�����֣���ʾ��һ���ַ���С�ڵڶ����ַ���
//		//
//		//abcd\0
//		//abcd\0
//		//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	//1 2
//	if (i == 3)
//		printf("�˳�����\n");
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	//1 2
//	if (flag == 0)
//		printf("�˳�����\n");
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


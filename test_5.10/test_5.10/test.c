//#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	3 + 5;
//	printf("hehe");
//	;//�����
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("δ����\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//
//	//<18 ������
//	//18~30 ����
//	//31~50 ����
//	//51~80 ������
//	//81~100 ����
//	//101+ ������
//
//	//if (age < 18)
//	//	printf("������\n");
//	//else if (age >= 18 && age <= 30)
//	//	printf("����\n");
//	//else if (age >= 31 && age <= 50)
//	//	printf("����\n");
//	//else if (age >= 51 && age <= 80)
//	//	printf("������\n");
//	//else if (age >= 81 && age <= 100)
//	//	prnitf("����\n");
//	//else
//	//	printf("������\n");
//
//	/*if (age < 18)
//		printf("������\n");
//	else
//		if (age >= 18 && age <= 30)
//			printf("����\n");
//		else if (age >= 31 && age <= 50)
//			printf("����\n");
//		else if (age >= 51 && age <= 80)
//			printf("������\n");
//		else if (age >= 81 && age <= 100)
//			printf("����\n");
//		else
//			printf("������\n");
//	*/
//
//	if (age > 18)
//	{
//		printf("����\n");
//		printf("��Ů����\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}
//���ɺõĴ�����
//δ���ҹ�����ʱ���б��Ժ�����
//������Ҫд����
//������д����
//DEV C++
//

//int main()
//{
//	int a = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}
//int test()
//{
//	int n = 20;
//	if (n > 5)
//		return 1;
//	return 2;
//	printf("hehe\n");
//}
//
//int main()
//{
//	int m = test();
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	int n = 5;
//	if (5 == n)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d", &n);
//	if (n % 2 == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		//�ж�i�������Ļ����ʹ�ӡi
//		if(i % 2 == 1)
//			printf("%d ", i);
//		++i;
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i = i+2;
//	}
//	return 0;
//}
//

//int main()
//{
//	int day = 0;
//	//����
//	scanf("%d", &day);
//	if (1 == day)
//		printf("����1\n");
//	else if (2 == day)
//		printf("����2\n");
//	else if (3 == day)
//		printf("����3\n");
//	else if (4 == day)
//		printf("����4\n");
//	else if (5 == day)
//		printf("����5\n");
//	else if (6 == day)
//		printf("����6\n");
//	else if (7 == day)
//		printf("������\n");
//	else
//		printf("�������\n");
//
//	return 0;
//}
//
//
//int main()
//{
//	int day = 0;
//	const int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("�������\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//
//	return 0;
//}
//

//
//
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//

//
//
//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}

//����Ļ�ϴ�ӡ1~10
//break - ����������ֹѭ��
//continue

//int main()
//{
//	int n = 1;
//	while (n<=10)
//	{
//		if (n == 5)
//			break;
//		printf("%d ", n);
//		n++;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	while (n <= 10)
//	{
//		n++;
//		if (n == 5)
//			continue;//��������ѭ��continue��ߵĴ��룬ֱ��ȥwhileѭ�����жϲ���
//		printf("%d ", n);
//	}
//	return 0;
//}

//C���Ա�׼�涨��
//sizeof(long) >= sizeof(int)
//       4               4
//       8               4
//long double     double
//
//

//int main()
//{
//	printf("%d\n", sizeof(long));
//	return 0;
//}

//int main()
//{
//	int ch = getchar();//A
//	printf("%c\n", ch);//A
//	putchar(ch);//��ӡ�ַ�
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	//
//	//EOF - end of file �ļ�������־
//	//#define EOF    (-1)
//	//�ں�����ȡʧ�ܵ�ʱ�򷵻���EOF
//	//scanf ������ȡ�ɹ������ص��Ƕ�ȡ�������ݵĸ���
//	//��ȡʧ�ܷ���EOF
//	//getchar ��ȡ�ɹ������ַ���ASCII��ֵ
//	//��ȡʧ�ܷ���EOF
//	//ctrl+Z - ����scanf ���� getchar ����EOF
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//
//	return 0;
//}
//
//int main()
//{
//	//123456
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s", password);//123456
//	printf("��ȷ������(Y/N):");
//	char input = 0;
//	//scanf("%c", &input);//Y
//	//��\n�����
//	//getchar();//\n
//
//	//�������������ʣ�������
//	/*while (getchar() != '\n')
//	{
//		;
//	}*/
//
//	//��ջ�����
//	//fflush(stdin);//�ﲻ��Ч������Ϊ���°汾��VS����������Ĺ��ܱ�ȡ����
//
//	input = getchar();
//	if ('Y' == input)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//
//

int main()
{
	int n = 10;
	scanf("%d", &n);

	return 0;
}
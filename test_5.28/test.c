#define _CRT_SECURE_NO_WARNINGS 1

//дһ��C���ԵĴ��룬����Ļ�ϴ�ӡ��hello bit
//
//#include <stdio.h>
//
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}
//



//����һ���Ǵ�main������ʼд

//
//C������main�����ǳ�������
//�����Ǵ�main�����ĵ�һ�п�ʼִ�е�
//main�������ҽ���һ��
//

//
//printf��һ���⺯�� - C���Ա������ṩ��һ���ֳɵĺ���
//ֱ�ӿ���ʹ��
//���ܾ�������Ļ�ϴ�ӡ����
//������ʹ��֮ǰ�ð���ͷ�ļ���stdio.h
//"hehe" - ��һ���ַ���
//˫�����������ľ����ַ���
//
//#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	printf("�Ǻ�\n");
//
//	return 0;
//}


//����д���Ƿǳ����� - ���Ƽ�
//void main()
//{
//
//}


//����д��Ҳ��
//int main(void)//void���������main�����������κβ���
//{
//
//	return 0;
//}

//�Ժ���ȥ�о�
//int main(int argc, char* argv[])
//{
//
//	return 0;
//}
//

#include <stdio.h>

//sizeof ��һ�����������Ǽ��������/������ռ�ڴ�ռ�Ĵ�С

//
//%d - ��10���Ƶ���ʽ��ӡһ������
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n%d\n", 10, 20);
//	return 0;
//}
//

//
//int main()
//{
//	//����  ������;
//	//����  ������ = ��ʼֵ;
//
//	//int age;
//	//int age2 = 20;
//	//55.5 С��ֱ��д������������Ĭ����double���͵�
//	//55.5f  ���ʱ�����float����
//	//float weight = 55.5f;
//	//double weight2 = 88.5;
//
//	//int _2b;
//	//int _2B;
//	//int char;
//	//������Ҫ���������
//	//
//	int num = 10;
//	printf("%d\n", num);//10
//	num = 20;//
//	printf("%d\n", num);//20
//
//	return 0;
//}

#include <stdio.h>

//����ԭ�������ǵı�����������Ҫ��ͻ
//���ǵ�ȫ�ֱ�����;ֲ����������ֳ�ͻ������£��ֲ����ȵ�

//int a = 100;//ȫ�ֱ���
//
//int main()
//{
//	int b = 10;//�ֲ�����
//	printf("a=%d\n", a);
//
//	return 0;
//}

int main()
{
	//дһ�����룬��2�������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//����2��������ֵ
	//&num1 - ȡ��num1�ĵ�ַ
	//& ȡ��ַ������

	scanf("%d %d", &num1, &num2);//10 20

	sum = num1 + num2;

	//��ӡ
	printf("%d\n", sum);

	return 0;
}
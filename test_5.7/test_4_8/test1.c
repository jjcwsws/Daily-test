#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//�����������У�main�������ҽ���һ��
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//scanf�������ص��Ƕ�ȡ�����ݵĸ���
//���scanf������ȡʧ�ܻ᷵��EOF
//EOF end of file �ļ�������־
//#define EOF -1


//int main() {
//    int iq = 0;
//    int eq = 0;
//    //����
//    while (scanf("%d", &iq) == 1)
//    {
//        if (iq >= 140)
//            printf("Genius\n");
//    }
//
//    return 0;
//}

//ctrl + Z

#include <stdio.h>

// int main() {
//     int iq = 0;
//     //����
//     scanf("%d", &iq);
//     if(iq >= 140)
//         printf("Genius\n");

//     return 0;
// }


// int main() {
//     int iq = 0;
//     //����
//     while (scanf("%d", &iq) == 1)
//     {
//         if (iq >= 140)
//             printf("Genius\n");
//     }

//     return 0;
// }



#include <stdio.h>

// int main() 
// {
//     printf("     **\n");
//     printf("     **\n");    
//     printf("************\n");
//     printf("************\n");
//     printf("    *  *\n");
//     printf("    *  *\n");

//     return 0;
// }


// int main() 
// {
//     printf("     **     \n");
//     printf("     **     \n");    
//     printf("************\n");
//     printf("************\n");
//     printf("    *  *    \n");
//     printf("    *  *    \n");

//     return 0;
// }


//#include <stdio.h>
//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man");
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    printf("I lost my cellphone!\n");
//    return 0;
//}
//

//void test()
//{
//	int b = 0;
//}
//
//int main()
//{
//	int a = 0;
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", 9 / 5);
//	printf("%d\n", 9 % 5);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int m = 0;
//    //����
//    scanf("%d", &m);
//    //�ж�
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = -1;
//
//    printf("%d\n", y);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int seconds = 0;
//    int h = 0;
//    int m = 0;
//    int s = 0;
//    //����
//    scanf("%d", &seconds);
//    //����
//    h = seconds / 3600;
//    m = (seconds % 3600) / 60;
//    s = seconds % 60;
//    //���
//    printf("%d %d %d\n", h, m, s);
//
//    return 0;
//}
//
#include <stdio.h>

// int main() {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     int m = a/b;
//     int n = a%b;
//     printf("%d %d\n", m, n);

//     return 0;
// }

//
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//����
//	scanf("%d %d", &a, &b);
//
//	int sum = a+b;
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	 int z = x + y;
//	 return z;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//����
//	scanf("%d %d", &a, &b);
//
//	int sum = Add(a, b);
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 0;
//	int b = 1;
//	int c = 2;*/
//	//....
//	//1~10
//	//���� - ���Ա���һ����ͬ���͵���
//	//char ch[8];//�ַ�����
//	// 
//	//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//��������
//	//             0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;//i++;
//	}
//	//printf("%d\n", arr[5]);
//	return 0;
//}
//
//int main()
//{
//	/*int a = 7 / 2;
//	printf("%d\n", a);*/
//
//	//printf("%lf\n", 7.0 / 2);
//	//printf("%lf\n", 7 / 2.0);
//	//printf("%lf\n", 7.0 / 2.0);
//
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	a = 10;//��ֵ
//
//	a = a + 5;
//	a += 5;//���ϸ�ֵ
//
//	a = a - 2;
//	a -= 2;
//
//	a = a * 3;
//	a *= 3;
//
//	return 0;
//}
//

//C��������α�ʾ����أ�
//0   - ��
//��0 - ��
//-1

//int main()
//{
//	int a = 0;
//	if (a)//aΪ�����if
//	{
//		printf("hehe\n");
//	}
//	if (!a)//aΪ�ٽ���if
//	{
//		printf("haha\n");
//	}
//	printf("%d\n", !a);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 5;
//	int b = a;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 100;
//	//sizeof ��һ�������������Ǻ���
//	//sizeof������Ǳ���ռ���ڴ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);//sizeof ��ߵ�����ʡ�ԣ���˵��sizeof ���Ǻ���
//
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//err- ����һ�������ʾ��
//
//
//	return 0;
//}
//

//int main()
//{
//	int a = 1;
//	//int b = ++a;//ǰ��++����++����ʹ��
//	/*a = a + 1;
//	b = a;*/
//	
//	int b = a++;//����++����ʹ�ã���++
//	//b=a
//	//a=a+1
//	printf("a=%d b=%d\n", a, b);//2 1
//
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	//int b = --a;//��--����ʹ��
//	//a=a-1
//	//b=a
//	int b = a--;//��ʹ�ã���--
//	//b = a
//	//a = a-1
//	printf("a=%d b=%d\n", a, b);//2 3
//
//	return 0;
//}
//

//int main()
//{
//	int a = 5;
//	printf("%d\n", --a);
//	printf("%d\n", a);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}
//


int main()
{
	//ǿ������ת��
	int a = (int)3.14;
	printf("%d\n", a);
	return 0;
}


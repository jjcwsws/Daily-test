#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//int main() {
//    int num1=2;
//    char str[6]= "abcde";
//
//    FILE* file = fopen("myfile.txt", "w");
//    if (file != NULL)
//    {
//        int a = fprintf(file, "%d %s", num1, str);
//        fclose(file);
//    }
//    
//    return 0;
//}
//#include <stdio.h>
//int main() {
//    int num1;
//    char str[100];
//
//    FILE* file = fopen("example.txt", "r");
//    if (file == NULL) {
//        printf("�ļ���ʧ��");
//        return 1;
//    }
//
//    int result = fscanf(file, "%d %s", &num1, str);//���ļ�����%d %s�ĸ�ʽ��ȡ���ݵ�num1,str��
//    if (result != 2) {
//        printf("��ȡ�ļ�ʧ��");
//        fclose(file);
//        return 1;
//    }
//
//    printf("�ɹ���ȡ������%d", num1);
//    printf("�ɹ���ȡ�ַ�����%s", str);
//
//    fclose(file);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//���ļ�
//	pFile = fopen("myfile.txt", "w");
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		char pc[10] = "abcdefg";
//		fputs(pc, pFile);//�������е�����д���ļ�����
//		printf("%s", pc);
//
//		//�ر��ļ�
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//���ļ�
//	pFile = fopen("myfile.txt", "r");
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		char pc[10];
//		char* c = fgets(pc, 6, pFile);//���ļ����ж�ȡ6���ַ�������pc,����ָ��pc��ָ��
//		printf("%s", pc);
//
//		//�ر��ļ�
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//���ļ�
//	pFile = fopen("myfile.txt", "w");
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		int c = fputc('y', pFile);//���ַ�yд�뵽pFile��ָ����ļ���ȥ
//		printf("%c", c);
//
//		//�ر��ļ�
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//���ļ�
//	pFile = fopen("myfile.txt", "r");
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		char pc[10] = "abcdefg";
//		int num = 3;
//		while (num--)
//		{
//			int c = fgetc(pFile);//�������е�����д���ļ�����
//			printf("%c", c);
//		}
//
//
//		//�ر��ļ�
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//���ļ�
//	pFile = fopen("myfile.txt", "r");//���ļ��ж�ȡ����
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		int c = fgetc(pFile);
//		printf("%c", c);
//		//�ر��ļ�
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    char buffer[50];
//    int value = 123;
//    float floatValue = 3.14;
//
//     ʹ�� sprintf ����ʽ������д���ַ���������
//    int numWritten = sprintf(buffer, "Value: %d, Pi: %.2f", value, floatValue);
//
//    printf("Formatted string: %s\n", buffer);
//    printf("Number of characters written: %d", numWritten);
//
//            return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "wb");
//	fputs("this is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	long size;
//	pFile = fopen("myfile.txt", "rb");
//	if (pFile == NULL)
//	{
//		perror("pFile");
//	}
//	else
//	{
//		fseek(pFile, 0, SEEK_END);
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("%ld", size);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10000;;
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "wb");//��һ���ļ������ڴ洢�����Ƶ�����
//	if (pFile != NULL)
//	{
//		fwrite(&a, 4, 1, pFile);
//		fclose(pFile);
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int c;
//	FILE* fp = fopen("myfile.txt", "r");
//	if (!fp)
//	{
//		perror("fp");
//		return -1;
//	}
//	//fgetc����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬾ͻ᷵��EOF
//	while ((c = fgetc(fp)) != EOF)
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(fp))
//		puts("\n���������ȡ����\n");
//	else if (feof(fp))
//		puts("\n�����ļ�ĩβ��ȡ����\n");
//}
#include <stdio.h>
int main()
{
	FILE* pf = fopen("myfile.txt", "w");
	fputs("abcdef", pf);//��ʱ�Ž�����д�������������
	printf("˯��10��-�Ѿ�д�����ˣ���myfile.txt�ļ��������ļ�û������\n");
	Sleep(10000);//�ȴ�10���ӣ��������ļ��ϲ�û�����ݣ�˵�����ݻ��������������
	printf("ˢ�»�����\n");
	fflush(pf);//10����ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	printf("��˯��10��-��ʱ���ٴδ�myfile.txt�ļ����ļ���������\n");
	Sleep(10000);//�ٹ�10����ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
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
//        printf("文件打开失败");
//        return 1;
//    }
//
//    int result = fscanf(file, "%d %s", &num1, str);//从文件中以%d %s的格式读取数据到num1,str中
//    if (result != 2) {
//        printf("读取文件失败");
//        fclose(file);
//        return 1;
//    }
//
//    printf("成功读取整数：%d", num1);
//    printf("成功读取字符串：%s", str);
//
//    fclose(file);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//打开文件
//	pFile = fopen("myfile.txt", "w");
//	//文件操作
//	if (pFile != NULL)
//	{
//		char pc[10] = "abcdefg";
//		fputs(pc, pFile);//将数组中的内容写入文件流中
//		printf("%s", pc);
//
//		//关闭文件
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//打开文件
//	pFile = fopen("myfile.txt", "r");
//	//文件操作
//	if (pFile != NULL)
//	{
//		char pc[10];
//		char* c = fgets(pc, 6, pFile);//从文件流中读取6个字符到数组pc,返回指向pc的指针
//		printf("%s", pc);
//
//		//关闭文件
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//打开文件
//	pFile = fopen("myfile.txt", "w");
//	//文件操作
//	if (pFile != NULL)
//	{
//		int c = fputc('y', pFile);//将字符y写入到pFile所指向的文件中去
//		printf("%c", c);
//
//		//关闭文件
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//打开文件
//	pFile = fopen("myfile.txt", "r");
//	//文件操作
//	if (pFile != NULL)
//	{
//		char pc[10] = "abcdefg";
//		int num = 3;
//		while (num--)
//		{
//			int c = fgetc(pFile);//将数组中的内容写入文件流中
//			printf("%c", c);
//		}
//
//
//		//关闭文件
//		fclose(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//打开文件
//	pFile = fopen("myfile.txt", "r");//从文件中读取数据
//	//文件操作
//	if (pFile != NULL)
//	{
//		int c = fgetc(pFile);
//		printf("%c", c);
//		//关闭文件
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
//     使用 sprintf 将格式化数据写入字符串缓冲区
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
//	pFile = fopen("myfile.txt", "wb");//打开一个文件，用于存储二进制的数据
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
//	//fgetc当读取失败的时候或者遇到文件结束的时候，就会返回EOF
//	while ((c = fgetc(fp)) != EOF)
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("\n遇到错误读取结束\n");
//	else if (feof(fp))
//		puts("\n遇到文件末尾读取结束\n");
//}
#include <stdio.h>
int main()
{
	FILE* pf = fopen("myfile.txt", "w");
	fputs("abcdef", pf);//此时才将数据写到输出缓冲区上
	printf("睡眠10秒-已经写数据了，打开myfile.txt文件，发现文件没有内容\n");
	Sleep(10000);//等待10秒钟，发现在文件上并没有数据，说明数据还在输出缓冲区上
	printf("刷新缓冲区\n");
	fflush(pf);//10过后，刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	printf("再睡眠10秒-此时，再次打开myfile.txt文件，文件有内容了\n");
	Sleep(10000);//再过10过后关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
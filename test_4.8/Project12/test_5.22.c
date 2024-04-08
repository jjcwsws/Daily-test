#define _CRT_SECURE_NO_WARNINGS 1\

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//

#include <string.h>

//
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;// \0 µÄ¿½±´
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	//printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}



#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;// \0 µÄ¿½±´
//}

//char* my_strcpy(char* dest, const char * src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++) 
//
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxxx";
//	char* p = NULL;
//
//	//my_strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}



//
//int main()
//{
//	//int num = 10;
//	//num = 20;
//
//	//int* p = &num;
//	//*p = 200;
//
//
//	const int n = 100;
//	//n = 200;//err
//
//	const int* p = &n;
//	*p = 20;//
//
//	printf("%d\n", n);
//
//	return 0;
//}
//


//int main()
//{
//	int m = 10;
//	int n  = 100;
//	const int * p = &m;
//	//*p = 0;//err
//	p = &n; //ok
//
//	printf("%d\n", m);
//
//	return 0;
//}

//
//int main()
//{
//	int m = 10;
//	int n = 100;
//	int * const p = &m;
//	*p = 0;//ok
//	p = &n; //err
//
//	printf("%d\n", m);
//
//	return 0;
//}
//


//size_t  unsigned int / unsigned long 
//>=0
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}


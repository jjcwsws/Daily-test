#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	char a = 0;
	while ((a = getchar()) != EOF)
	{
		if (a < '0' || a>'9')
		{
			continue;
		}
		putchar(a);
	}
	return 0;
}
#include<stdio.h>
int main()
{
    int a = 0;
    while (scanf("%d", &a) != EOF);//ע���������
    if (a >= 140)
    {
        printf("Genius\n");
    }
    return 0;
}
//��Ԫ����ĸ��������ĸ
int main()
{
    char a = 0;
   // scanf("%c", &a);
    while ((a=getchar())!=EOF)
    {
        getchar();
        if ((a == 'a' || a == 'A') || (a == 'e' || a == 'E') || (a == 'i' || a =='I') || (a == 'o' || a == 'O') || (a=='u' || a=='U'))
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    return 0;
}
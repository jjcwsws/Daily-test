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
    while (scanf("%d", &a) != EOF);//注意多行输入
    if (a >= 140)
    {
        printf("Genius\n");
    }
    return 0;
}
//求元音字母，辅音字母
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
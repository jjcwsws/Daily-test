#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    int a = 3;
    int b = 2;
    if (a > b)
        printf("%d", a);
    return 0;
}
if else���
int main()
{
	int i = 1;
	while (i <= 10)
	{	
		if (i == 5)
		{
			i++;
			continue;
		}
		printf("%d ", i);
		i += 1;
	}
	return 0;
}
int main()
{
	char arr[20] = { 0 };
	printf("����������:");
	scanf("%s", arr);
	getchar();
	char a = 0;
	printf("��ȷ������Y/N:");
	a = getchar();
	if ('Y' == a)
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
		printf("ȷ��ʧ��\n");	
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#define Max 10
int main()
{
	int arr[Max] = { 0 };
	int arr1[Max] = { 0 };
	int arr2[Max] = { 0 };
	int i = 0;
	printf("«Î ‰»Î£∫");
	for (i = 0; i < Max; i++)
	{
		scanf("%d", &arr[i]);
	}
	int j = 0;
	int k = 0;
	for (i = 0; i < Max; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr1[j] = arr[i];
			j++;
		}
		else
		{
			arr2[k] = arr[i];
			k++;
		}
	}
	printf(" ‰≥ˆ£∫");
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr1[i]);
	}
	for (i = 0; i < k; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
#include<stdio.h>

// ����Func4��ʱ�临�Ӷȣ�
void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)
	{
		++count;
	}
	printf("%d\n", count + N);
}

// O(2^N)
// �ĳ�ѭ�� ֱ�Ӿ���O(N)
long long Fib(size_t N)
{
	if (N < 3)
		return 1;

	return Fib(N - 1) + Fib(N - 2);
}

int main()
{
	//Func4(1);
	printf("%lld\n", Fib(30));
	printf("%lld\n", Fib(40));
	printf("%lld\n", Fib(60));



	return 0;
}
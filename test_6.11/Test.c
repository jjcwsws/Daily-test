#include<stdio.h>

// 计算Func4的时间复杂度？
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
// 改成循环 直接就是O(N)
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
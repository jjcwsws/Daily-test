#include<stdio.h>
int main() {
	ILoveYou(3000);
}
void loveYou(int n) {
	int i = 1;
	while (i <= n) {
		i = i * 2;
		printf("I love You %d\n", i);
	}
	printf("I Love You More Than %d\n", n);
}

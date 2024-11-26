#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	float a = 0.0;
	scanf("%f", &a);
	printf("%-7.3f", a);

	return 0;
}


int main()
{
   /* char a = 0;
    scanf("%c", &a);
    printf("%c", a);
    return 0;*/

    /*char a = getchar();
    putchar(a);*/
}


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", b);
    return 0;
}
#include <stdio.h>

int main() {
    char a = 0;
    scanf("%c", &a);
    printf("%c%c%c\n%c%c%c\n%c%c%c", a, a, a, a, a, a, a, a, a);
    return 0;
}

#include <stdio.h>

int main() {
    char a = 0;
    scanf("%c", &a);
    printf("  %c\n", a);
    printf(" %c%c%c\n", a, a, a);
    printf("%c%c%c%c%c\n", a, a, a, a, a);
    printf(" %c%c%c\n", a, a, a);
    printf("  %c",a);

    return 0;
}

#include <stdio.h>

int main() {
    char a = 0;
    scanf("%c", &a);
    printf("%d", a);
    return 0;
}
#include <stdio.h>


int main() {
	float a = 0;
	scanf("%f", &a);
	printf("%.0f",a);
	return 0;
}


//输入生日
int main()
{
	int a, b, c;
	scanf("%4d%2d%2d", &a, &b, &c);
	printf("year=%d\nmonth=%02d\nday=%02d", a, b, c);
	return 0;
}
int main() {
	int birthday, year, month, day;
	scanf("%d", &birthday);
	day = birthday % 100;
	birthday /= 100;
	month = birthday % 100;
	year = birthday / 100;
	printf("year=%d\nmonth=%02d\nday=%02d", year, month, day);


	return 0;
}

//大小写转换
int main() {
    int a;
    while ((a = getchar()) != EOF)
    {
        getchar();
        putchar(a + 32);
        printf("\n");
    }
    return 0;
}


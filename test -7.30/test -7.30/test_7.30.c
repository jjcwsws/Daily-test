.file	"code.c"
.text
.section.rodata
.LC0:
.string	"hello free version"
.text
.globl	main
.type	main, @function
main :
.LFB0 :
	.cfi_startproc
	pushq% rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq % rsp, % rbp
	.cfi_def_cfa_register 6
	movl	$.LC0, % edi
	call	puts
	movl	$0, % eax
	popq% rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.LFE0:
.size	main, . - main
.ident	"GCC: (GNU) 9.3.1 20200408 (Red Hat 9.3.1-2)"
.section.note.GNU - stack, "", @progbits


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
	printf("我的pid: %d\n", getpid());
	printf("我的父进程pid: %d\n", getppid());
}


#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define MAX 101
#define LABLE '='

int main()
{
    char bar[MAX];
    memset(bar, '\0', sizeof(bar));

    int i = 0;
    while (i <= 100)
    {
        printf("%s\r", bar);
        fflush(stdout);
        bar[i++] = LABLE;
        usleep(100000);
    }

    printf("\n");

    //int cnt = 10;
    //while(cnt>=0)
    //{
    //    printf("%-2d\r", cnt);
    //    fflush(stdout);
    //    cnt--;
    //    sleep(1);
    //}
    //printf("\n");
    return 0; // 程序就开始结束
}


#include <stdio.h>

int Sum(int n)
{
    int flag = 1;

    if (flag == 1) printf("haha\n");
    else printf("hehe\n");

    int i = 1;
    int sum = 0;
    for (; i < sum; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");
    printf("hello world!\n");

    int result = Sum(100);

    printf("result = %d\n", result);

    return 0;
}



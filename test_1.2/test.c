#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//int main() {
//    char arr[3][3];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            
//            scanf("%c", &arr[i][j]);
//            getchar();
//        }
//    }
//    for (i = 0; i < 3; i++)
//    {
//        if (arr[0][0] == arr[1][1] &&arr[1][1] == arr[2][2] && arr[1][1] == 'K' ||
//            arr[i][0] == arr[i][1] &&arr[i][1] == arr[i][2] && arr[i][0] == 'K' ||
//            arr[0][i] == arr[1][i] &&arr[1][i] == arr[2][i] && arr[0][i] == 'K'||
//            arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]&&arr[1][1]=='K')
//        {
//            printf("KiKi wins!");
//            break;
//        }
//        else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] == 'B' ||
//            arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] == 'B' ||
//            arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] == 'B'||
//            arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] == 'B')
//        {
//            printf("BoBo wins!");
//            break;
//        }
//        else if(i==2)
//        {
//            printf("No winner!");
//            break;
//        }
//    }
//   return 0;
//}
//ɨ��
//#include <stdio.h>
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    getchar();
//    char arr[1002][1002];
//    int i = 0;
//    int j = 0;
//    //��ʼ��
//    for (i = 0; i <1002; i++)
//    {
//        for (j = 0; j <1002; j++)
//        {
//            arr[i][j] = '.';
//        }
//    }
//    //������
//    for (i = 1; i <= a; i++)
//    {
//        for (j = 1; j <= b; j++)
//        {           
//            scanf("%c", &arr[i][j]);
//        }
//        getchar();
//    }
//    //ɨ��
//    for (i = 1; i <= a; i++)
//    {
//        for (j = 1; j <= b; j++)
//        {
//            if (arr[i][j] == '*')
//            {
//                printf("*");
//            }
//            else//��ӡ�׵ĸ�������8��ȥ�����׵ĸ���
//                printf("%d", 8-(arr[i][j - 1] + arr[i][j + 1] +
//                    arr[i - 1][j] + arr[i - 1][j - 1] + arr[i - 1][j + 1] +
//                    arr[i + 1][j] + arr[i + 1][j - 1] + arr[i + 1][j + 1] - 8 * '*') / 4);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////����ͳ��
//#include <stdio.h>
//int main() {
//    char s;
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%c", &s);
//        if (s != ' ' && s != '\n')//����
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//��¼��֤
#include <stdio.h>
#include <string.h>
int main() {
    char c[20];
    char d[20];
    scanf("%s%s", c, d);

    if (strcmp(c, "admin") == 0 && strcmp(d, "admin") == 0)
        printf("Login Success!");
    else
        printf("Login Fail!");
    return 0;
}
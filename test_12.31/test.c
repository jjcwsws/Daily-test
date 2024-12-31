#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
// æÿ’ÛΩªªª
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int arr[100][100] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k = 0;
    scanf("%d", &k);
    char t = 0;
    int c = 0;
    int d = 0;
    for (i = 0; i < k; i++)
    {
        getchar();
        scanf("%c%d%d", &t, &c, &d);
        if (t == 'r')
        {
            for (j = 0; j < b; j++)
            {
                int temp = arr[c - 1][j];
                arr[c - 1][j] = arr[d - 1][j];
                arr[d - 1][j] = temp;
            }
        }
        if (t == 'c')
        {
            for (j = 0; j < a; j++)
            {
                int temp = arr[j][c - 1];
                arr[j][c - 1] = arr[j][d - 1];
                arr[j][d - 1] = temp;
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//—Óª‘»˝Ω«
#include <stdio.h>
int main() {
    int a = 0;
    scanf("%d", &a);
    int arr[900][900] = { 0 };
    int i = 0;
    int j = 0;
    //º∆À„
    for (i = 0; i < a; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}
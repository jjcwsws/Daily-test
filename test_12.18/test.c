#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//猜名次
// 版本1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)//五次循环
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&//判断条件是否成立，全部满足则打印
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1 )
//						{ if(a*b*c*d*e==120)
//							printf("a:%d  b:%d  c:%d  d:%d  e:%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//版本2
//#include <stdio.h>
//int Not_back(int* arr)
//{
//	int temp[7] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (temp[arr[i]])//若为标记为1，则说明有重复的，否则为0
//		{
//			return 0;
//		}
//		temp[arr[i]] = 1;//每次存进去一个标记为1，没存入的还是为0
//	}
//	return 1;
//}
//int main()
//{
//	int arr[5];
//	for (arr[0] = 1; arr[0] <= 5; arr[0]++)
//	{
//		for (arr[1] = 1; arr[1] <= 5; arr[1]++)
//		{
//			for (arr[2] = 1; arr[2] <= 5; arr[2]++)
//			{
//				for (arr[3] = 1; arr[3] <= 5; arr[3]++)
//				{
//					for (arr[4] = 1; arr[4] <= 5; arr[4]++)
//					{
//						if ((arr[1] == 2) + (arr[0] == 3) == 1 &&
//							(arr[1] == 2) + (arr[4] == 4) == 1 &&
//							(arr[2] == 1) + (arr[3] == 2) == 1 &&
//							(arr[2] == 5) + (arr[3] == 3) == 1 &&
//							(arr[4] == 4) + (arr[0] == 1) == 1 &&
//							Not_back(arr))
//						{
//							for (int i = 0; i < 5; i++)
//							{
//								printf("%d ", arr[i]);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//猜凶手
//#include <stdio.h>
//int main()
//{
//	char i = 0;
//	for (i = 'a'; i < 'e'; i++)
//	{
//		if ((i != 'a') + (i == 'c') + (i== 'd') + (i != 'd') == 3)
//		{
//			printf("%c ", i);
//		}
//	}
//	return 0;
//}
//杨辉三角
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int arr[30][30] = {0};
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//				printf("%d ", arr[i][j]);
//			}
//			else if (i > 1 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main() {
//    int a = 0;
//    while (~scanf("%d", &a))
//    {
//        char arr[800][800] = { 0 };
//        int top_y = 3 * pow(2, a - 1) - 1;//确定顶点*的位置
//        arr[0][top_y] = '*';
//        arr[1][top_y - 1] = '*';
//        arr[1][top_y + 1] = '*';
//        arr[2][top_y - 2] = '*';
//        arr[2][top_y] = '*';
//        arr[2][top_y + 2] = '*';//每次进来，先确定一个小树，接着就是要复制小树
//        //将小树复制到该小树的左下角和右下角，复制完之后整体又当作一个树
//        //接着再将该整体树又复制到该整体树的左下角和右下角，就这样一直循环下去
//        int i = 0;
//        //先进行复制
//        for (i = 1; i < a; i++)//复制次数。已经确定了一个小树，复制次数要比输入的数字少1
//        {
//            int range = 3 * pow(2, i - 1) - 1;//每次要复制的树是几层，层数从0开始计数，因为数组是从0开始
//            int x = 0;
//            for (x = 0; x <= range; x++)//需要复制的层数
//            {
//                int y = 0;
//                for (y = top_y - range; y <= top_y + range; y++)//每一层复制多少次
//                {
//                    arr[x + range + 1][y - range - 1] = arr[x][y];//复制到左边，从小树左下角的第一个*先复制
//                    arr[x + range + 1][y + range + 1] = arr[x][y];//复制到右边，从小树左下脚的第一个*先复制
//                }
//            }
//        }
//        //开始打印树
//        for (i = 0; i <= 3 * pow(2, a - 1) - 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= 3 * pow(2, a) - 2; j++)
//            {
//                if (arr[i][j] == '*')
//                {
//                    printf("%c", arr[i][j]);
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        //打印树干
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 3 * pow(2, a - 1) - 1; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}

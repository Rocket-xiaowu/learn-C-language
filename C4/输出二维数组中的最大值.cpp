//#include<stdio.h>
//
//int max_four_number(int a, int b, int c, int d)
//{
//	int max1 = a > b ? a : b;
//	int max2 = c > d ? c : d;
//	int max = max1 > max2 ? max1 : max2;
//	return max;
//}
//
//int max_three_number(int a, int b, int c)
//{
//	int max1 = a > b ? a : b;
//	int max = c > max1 ? c : max1;
//	return max;
//}
//
//void shuzumax()
//{
//	int a[3][4];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	int max1 = max_four_number(a[0][0], a[0][1], a[0][2], a[0][3]);
//	int max2 = max_four_number(a[1][0], a[1][1], a[1][2], a[1][3]);
//	int max3 = max_four_number(a[2][0], a[2][1], a[2][2], a[2][3]);
//	int max = max_three_number(max1, max2, max3);
//	printf("%d ", max);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (max == a[i][j])
//				printf("%d %d\n", i, j);
//		}
//	}
//
//}
//int main()
//{
//	shuzumax();
//	return 0;
//}
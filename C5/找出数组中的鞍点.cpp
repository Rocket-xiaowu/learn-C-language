//#include<stdio.h>
//
//int k;
//int max;
//void camp(int *point,int m,int hang,int n)
//{
//	max = -1;
//	for (int i = 0; i < m; i++)
//	{
//		if (*point > max)
//		{
//			max = *point;
//			k = i;
//		}
//		point++;
//	}
//}
//
//int main()
//{
//	int tian[50][50];
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf_s("%d", &tian[i][j]);
//		}
//	}
//	int flag, max, hang, * point;
//	for (hang = 0; hang < n; hang++)
//	{
//		flag = 1;
//		point = tian[hang];
//		camp(point, m, hang, n);
//		for (int lie = k, l = 1; l < n; l++)
//		{
//			if (tian[hang][k] > tian[l][k])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	printf("%d %d %d", tian[hang][k], hang, k);
//}
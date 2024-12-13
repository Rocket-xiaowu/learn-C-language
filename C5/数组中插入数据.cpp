//#include<stdio.h>
//
//int main()
//{
//	int m, n;
//	scanf_s("%d", &m);
//	int ints[50];
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d", &ints[i]);
//	}
//	scanf_s("%d", &n);
//	int temp;
//	if (n < ints[0])
//	{
//		for (int j = 0; j < m; j++)
//		{
//			temp = ints[j + 1];
//			ints[j] = n;
//			ints[j + 1] = ints[j];
//		}
//	}
//	else if (n > ints[m - 1]) ints[m] = n;
//	else
//	{
//		for (int i = 0; i < m - 1; i++)
//		{
//			if (ints[i]<n && ints[i + 1]>n)
//			{
//				for (int j = i + 1; j <= m; j++)
//				{
//					temp = ints[j];
//					ints[j] = n;
//					n= temp;
//				}
//				break;
//			}
//		}
//	}
//	for (int i = 0; i <= m; i++)printf("%d ", ints[i]);
//	printf("\n");
//	return 0;
//}

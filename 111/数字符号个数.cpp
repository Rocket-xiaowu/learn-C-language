//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int m, n;
//	int num[10] = {0,0,0,0,0,0,0,0,0,0};
//	scanf_s("%d%d", &m, &n);
//	int* ints = (int*)malloc(n * sizeof(int));
//	ints[0] = m;
//	for (int i = 0; i < n-1; i++)
//	{
//		ints[i + 1] = ints[i] + 1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		int shuzu[10];
//		while (ints[i]!=0)
//		{
//			shuzu[j] = ints[i] % 10;
//			ints[i] = ints[i] / 10;
//			j++;
//		}
//		for (int k = 0; k < j; k++)
//		{
//			for (int q = 0; q < 10; q++)
//			{
//				if (shuzu[k] == q)
//					num[q]++;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//		printf("%d ", num[i]);
//	return 0;
//}

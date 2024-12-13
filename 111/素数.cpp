//#include<stdio.h>
//#include<stdlib.h>
//
//int judge_sushu(int *ints,int n)
//{
//	int num = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int time = 0;
//		for (int j = 1; j <= ints[i]&&ints[i] > 1; j++)
//		{
//			if (ints[i] % j == 0)
//				time++;
//		}
//		if (time == 2)
//			num++;
//	}
//	return num;
//}
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int ints[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &ints[i]);
//	}
//	printf("%d",judge_sushu(ints, n));
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//void Bubble(int n, int* a)
//{
//	int temp;
//	for (int i = 1; i <= n - 1; i++)
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int *ints = (int*)malloc(n*sizeof(int));
//	for (int i = 0; i < n; i++)
//		scanf_s("%d", &ints[i],n);
//	Bubble(n, ints);
//	for (int k = 0; k < n-1; k++)
//	{
//		printf("%d ", ints[k]);
//	}
//	printf("%d\n",ints[n-1]);
//	return 0;
//}

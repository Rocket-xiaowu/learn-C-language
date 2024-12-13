//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int* a = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++) scanf_s("%d", &a[i]);
//	int max = 0;
//	int result = -1;
//	int m;
//	for (int i = 0; i < n - 1; i++)
//	{
//		m = a[i] > a[i + 1] ? a[i] : a[i + 1];
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i] == m && a[i + 1] == m)
//		{
//			printf("%d\n", result); 
//			return 0;
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		if (max < a[j])
//		{
//			max = a[j];
//			result = j + 1;
//		}
//	}
//	printf("%d\n", result);
//	return 0;
//}

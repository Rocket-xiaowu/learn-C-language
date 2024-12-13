//#include<stdio.h>
//#include<stdlib.h>
//
//void Fibonacci(int n)
//{
//	int *ints = (int*)malloc(n * sizeof(int));
//	ints[0] = 1;
//	ints[1] = 1;
//	for (int i = 2; i < n; i++)
//	{
//		ints[i] = ints[i - 1] + ints[i - 2];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%12d", ints[i]);
//		if ((i + 1) % 5 == 0)
//			printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	Fibonacci(n);
//	printf("\n");
//	return 0;
//}
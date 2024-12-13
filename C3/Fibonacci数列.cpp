//#include <stdio.h>
//#include<stdlib.h>
//
////递归方法
//int Fib1(int n)
//{
//	if (n <= 2) 
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
//
////迭代方法
//int Fib2(int n)
//{
//	int f1 = 1, f2 = 1, f3=1;
//	while (n > 2)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//		n--;
//	}
//	return f3;
//}
//
////数组方法
//int Fib3(int n)
//{
//	if (n == 1 || n == 2)return 1;
//	int* ints = (int*)malloc(n * sizeof(int));
//	ints[0] = 1;
//	ints[1] = 1;
//	for (int i = 2; i < n; i++)
//	{
//		ints[i] = ints[i - 1] + ints[i - 2];
//	}
//	return ints[n-1];
//}
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//		printf("%d ", Fib1(i));
//	return 0;
//}
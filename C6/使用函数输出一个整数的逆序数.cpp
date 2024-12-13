//#include<stdio.h>
//#include<math.h>
//
//int reverse(int number)
//{
//	int a[50],i=0;
//	int turn = 0;
//	if (number < 0);
//	{
//		number = -number;
//		while (number != 0)
//		{
//			a[i] = number % 10;
//			number = number / 10;
//			i++;
//		}
//		for (int j = 0; j < i; j++)
//		{
//			turn += a[j] * pow(10, i-j-1);
//		}
//		return -turn;
//	}
//	if (number >= 0);
//	{
//		while (number != 0)
//		{
//			a[i] = number % 10;
//			number = number / 10;
//			i++;
//		}
//		for (int j = 0; j < i; j++)
//		{
//			turn += a[j] * pow(10, i-j-1);
//		}
//		return turn;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("%d\n", reverse(n));
//	return 0;
//}

//#include<stdio.h>
//
//int F(int n)
//{
//	int a,count=0;
//	for (int i = 1; i <= n; i++)
//	{
//		int j = i;
//		while (j != 0)
//		{
//			a = j % 10;
//			j = j / 10;
//			if (a == 1 || a == 2)count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n;
//	while(scanf_s("%d", &n)!=EOF) printf("%d\n", F(n));
//	return 0;
//}
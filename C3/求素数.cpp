//#include<stdio.h>
//
//int main()
//{
//	int a;
//	void judge_sushu(int data);
//	scanf_s("%d", &a);
//	if (a > 1 && a < 100000000) judge_sushu(a);
//	else printf("input error!");
//	return 0;
//}
//
//void judge_sushu(int data)
//{
//	int time = 0;
//	for (int i = 1; i <= data; i++)
//		if (data % i == 0)
//			time++;
//	if (time == 2)
//		printf("prime");
//	else
//		printf("not prime");
//}
//
//void get_sushu()
//{
//	for (int i = 100; i < 200; i++)
//	{
//		int time = 0;
//		for (int j = 1; j <= i; j++)
//			if (i % j == 0)
//				time++;
//		if (time == 2)
//			printf("%d ", i);
//	}
//}

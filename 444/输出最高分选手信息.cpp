//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 5
//
//int main()
//{
//	int no[N];
//	char name[N][50];
//	int score[N][4];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &no[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", &name[i]);
//
//	}
//	for (int i = 0; i < N; i++)
//	{
//		int total = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &score[i][j]);
//			total += score[i][j];
//		}
//		score[i][3] = total*1.0/3;
//	}
//	int max = score[0][3],index=0;
//	for (int i = 0; i < N-1; i++)
//	{
//		if (max < score[i + 1][3])
//		{
//			max = score[i + 1][3];
//			index = i + 1;
//		}
//	}
//	printf("最高分为:%d,编号为:%d,姓名为:%s", max, no[index], name[index]);
//	return 0;
//}

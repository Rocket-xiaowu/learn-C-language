//#include<stdio.h>
//#define N 3
//#include<string.h>
//
//struct Student
//{
//	char name[30];
//	float score[3];
//};
//
//int main()
//{
//	struct Student stus[N];
//	float aver[3];
//	char temp[30];
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < 30; j++)
//		{
//			scanf_s("%c", &temp[j]);
//			if (temp[j] == ' ')
//			{
//				temp[j] = '\0';
//				break;
//			}
//		}
//		strcpy_s(stus[i].name, temp);
//		scanf_s("%f%f%f", &stus[i].score[0], &stus[i].score[1], &stus[i].score[2]);
//		getchar();
//		aver[i] = (stus[i].score[0] + stus[i].score[1] + stus[i].score[2]) / 3;
//	}
//	if (aver[0] > aver[1] && aver[0] > aver[2])
//	{
//		printf("%s %.2f\n", stus[0].name, aver[0]);
//		if (aver[1] > aver[2])
//		{
//			printf("%s %.2f\n", stus[1].name, aver[1]);
//			printf("%s %.2f\n", stus[2].name, aver[2]);
//		}
//		else
//		{
//			printf("%s %.2f\n", stus[2].name, aver[2]);
//			printf("%s %.2f\n", stus[1].name, aver[1]);
//		}
//	}
//	else if (aver[1] > aver[2] && aver[1] > aver[0])
//	{
//		printf("%s %.2f\n", stus[1].name, aver[1]);
//		if (aver[0] > aver[2])
//		{
//			printf("%s %.2f\n", stus[0].name, aver[0]);
//			printf("%s %.2f\n", stus[2].name, aver[2]);
//		}
//		else
//		{
//			printf("%s %.2f\n", stus[2].name, aver[2]);
//			printf("%s %.2f\n", stus[0].name, aver[0]);
//		}
//	}
//	else
//	{
//		printf("%s %.2f\n", stus[2].name, aver[2]);
//		if (aver[0] > aver[1])
//		{
//			printf("%s %.2f\n", stus[0].name, aver[0]);
//			printf("%s %.2f\n", stus[1].name, aver[1]);
//		}
//		else
//		{
//			printf("%s %.2f\n", stus[1].name, aver[1]);
//			printf("%s %.2f\n", stus[0].name, aver[0]);
//		}
//	}
//	return 0;
//}

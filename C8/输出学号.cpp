//#include<stdio.h>
//
//struct Student
//{
//	int no;
//	char name[30];
//	int score;
//};
//
//int main()
//{
//	struct Student stus[100];
//	int n;
//	int maxscore;
//	int index;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		if (n == 0)continue;
//		for (int i = 0; i < n; i++)
//		{
//			scanf_s("%d", &stus[i].no);
//			getchar();
//			for (int j = 0; j < 30; j++)
//			{
//				scanf_s("%c", &stus[i].name[j]);
//				if (stus[i].name[j] == ' ')
//				{
//					stus[i].name[j] = '\0';
//					break;
//				}
//			}
//			scanf_s("%d", &stus[i].score);
//		}
//		maxscore = stus[0].score;
//		index = 0;
//		for (int i = 1; i < n; i++)
//		{
//			if (stus[i].score > maxscore)
//			{
//				maxscore = stus[i].score;
//				index = i;
//			}
//		}
//		printf("%d %s\n", stus[index].no, stus[index].name);
//	}
//	return 0;
//}

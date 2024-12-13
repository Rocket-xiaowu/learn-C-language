//#include<stdio.h>
//
//void swap(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main()
//{
//	int date[100][2];
//	int i;
//	int month, day;
//	for (i = 0; i < 100; i++)
//	{
//		scanf_s("%d%d", &date[i][0], &date[i][1]);
//		if (date[i][0] == 0 && date[i][1] == 0)break;
//	}
//	for (int j = 0; j < i; j++)
//	{
//		for (int k = j + 1; k < i; k++)
//		{
//			if (date[j][0] > date[k][0])
//			{
//				swap(&date[j][0], &date[k][0]);
//				swap(&date[j][1], &date[k][1]);
//			}
//		}
//	}
//	for (int j = 0; j < i; j++)
//	{
//		for (int k = j + 1; k < i; k++)
//		{
//			if (date[j][0] == date[k][0] && date[j][1] > date[k][1])
//			{
//				swap(&date[j][1], &date[k][1]);
//			}
//		}
//	}
//	for (int j = 0; j < i; j++)
//	{
//		printf("%d %d\n", date[j][0], date[j][1]);
//	}
//	return 0;
//}

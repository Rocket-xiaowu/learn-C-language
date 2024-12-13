//#include<stdio.h>
//#define N 10
//
////交换函数
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
////遍历数组，选出最小值，放在数组左边
//void select_sort(int ints[])
//{
//	int min, temp;
//	for (int i = 0; i < N-1; i++) //趟数
//	{
//		min = i; //记录下标
//		for (int j = i+1; j < N; j++)
//		{
//			if (ints[min] > ints[j])
//			{
//				min = j;
//			}
//		}
//		Swap(&ints[min], &ints[i]);
//	}
//}
//
//
////同时遍历出最大值和最小值，并将其分别放在数组的右边和左边，减少遍历次数，优化运行速度
//void select_sort_plus(int ints[])
//{
//	int begin = 0;
//	int end = N - 1;
//	while (begin < end)
//	{
//		int max = end;
//		int min = begin;
//		int i;
//		for (i = begin + 1; i <= end; i++)
//		{
//			if (ints[i] < ints[min])
//			{
//				min = i;
//				Swap(&ints[begin], &ints[min]);
//			}
//		}
//		for (int j = begin + 1; j <= end; j++)
//		{
//			if (ints[j] > ints[max])
//			{
//				max = j;
//			}
//		}
//		Swap(&ints[end], &ints[max]);
//		begin++;
//		end--;
//	}
//}
//
//int main()
//{
//	int ints[N];
//
//
//	for (int i = 0; i < N; i++)
//		scanf_s("%d", &ints[i]);
//	select_sort_plus(ints);
//	for (int i = 0; i < N; i++)
//		printf("%d ", ints[i]);
//	printf("\n");
//}
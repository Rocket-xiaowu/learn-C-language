//#include<stdio.h>
//#define N 10
//
////��������
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
////�������飬ѡ����Сֵ�������������
//void select_sort(int ints[])
//{
//	int min, temp;
//	for (int i = 0; i < N-1; i++) //����
//	{
//		min = i; //��¼�±�
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
////ͬʱ���������ֵ����Сֵ��������ֱ����������ұߺ���ߣ����ٱ����������Ż������ٶ�
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
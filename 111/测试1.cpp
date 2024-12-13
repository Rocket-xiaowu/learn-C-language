//#include<stdio.h>
//#include<stdlib.h>
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
///*
//对于有序数组，快速排序效率较低
//解决方案：寻找数组的中值作为split
//*/
////快速排序的优化
//
//int getmid(int a[], int low, int high)
//{
//	int mid = (low + high) / 2;
//	//比较三者的关系
//	if (a[low] < a[mid])
//	{
//		if (a[high] > a[mid])
//			return mid;
//		else if (a[low] < a[high])
//			return high;
//		else
//			return low;
//	}
//	else
//	{
//		if (a[mid] > a[high])
//			return mid;
//		else if (a[high] > a[low])
//			return low;
//		else
//			return high;
//	}
//}
//
//int findsplit(int ints[], int low, int high)
//{
//	int mid = getmid(ints, low, high);
//	swap(&ints[mid], &ints[low]);
//	int split = ints[low];
//	while (low < high)
//	{
//		while (low < high)
//		{
//			if (ints[high] < split)
//			{
//				ints[low] = ints[high];
//				low++;
//				break;
//			}
//			high--;
//		}
//		while (low < high)
//		{
//			if (ints[low] > split)
//			{
//				ints[high] = ints[low];
//				high--;
//				break;
//			}
//			low++;
//		}
//	}
//	ints[low] = split;
//	return low;
//}
//
//void rapidselect(int ints[], int low, int high)
//{
//	if (low >= high)
//	{
//		return;
//	}
//	int splitindex;
//	splitindex = findsplit(ints, low, high);
//	//split左侧排序
//	rapidselect(ints, low, splitindex - 1);
//	//split右侧排序
//	rapidselect(ints, splitindex + 1, high);
//}
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int* ints = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//		scanf_s("%d", &ints[i], n);
//	rapidselect(ints, 0, n - 1);
//	int max=ints[n-1], min=ints[0],he=0;
//	float average;
//	for (int i = 0; i < n; i++)
//	{
//		he += ints[i];
//	}
//	average = (float)he / n;
//	printf("%d %d %.2f", max, min, average);
//	return 0;
//}

//#include<stdio.h>
//#define N 10
//
////循环方法
//int find1(int ints[], int n, int key)
//{
//	int low = 0;
//	int high = n - 1;
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (ints[mid] == key)
//			return mid;
//		if (key < ints[mid])//前半部分查找
//			high = mid - 1;
//		else//后半部分查找
//			low = mid + 1;
//	}
//	return -1;
//}
//
////递归方法
//int find2(int ints[], int low, int high, int key)
//{
//	int mid = (low + high) / 2;
//	if (low <= high)
//	{
//		if (ints[mid] == key)
//			return mid;
//		else if (key < ints[mid])
//			return find2(ints, low, mid - 1, key);
//		else
//			return find2(ints, mid + 1, high, key);
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int ints[N] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key;
//	int result;
//	do
//	{
//		scanf_s("%d", &key);
//		result = find2(ints, 0, N-1,key);
//		printf("%d\n", result);
//	} while (1);
//	return 0;
//}
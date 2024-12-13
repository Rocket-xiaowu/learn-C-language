//#include<stdio.h>
//#define N 15
//
//int find(int ints[], int n, int key)
//{
//	int low = 0;
//	int high = n - 1;
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (ints[mid] == key)
//			return mid;
//		if (key < ints[mid])
//			high = mid - 1;
//		else
//			low = mid + 1;
//	}
//	return -1;
//}
//
//int main()
//{
//	int ints[N];
//	for (int i = 0; i < 15; i++)
//	{
//		scanf_s("%d", &ints[i]);
//	}
//	int key;
//	scanf_s("%d", &key);
//	int result;
//	result = find(ints,N - 1, key);
//	if (result == -1)printf("NO\n");
//	else printf("%d\n", result);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//void arrayShiftRight(int a[], int n, int m,int b[])
//{
//	for (int i = 0; i < n - m; i++) b[i + m] = a[i];
//	for (int i = 0; i < m; i++) b[i] = a[n-m+i];
//}
//
//int main()
//{
//	int i,n,m;
//	scanf_s("%d%d", &n, &m);
//	int* arr = (int*)malloc(n * sizeof(int));
//	int* b = (int*)malloc(n * sizeof(int));
//	if (n < m) m = m - n;
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &arr[i]);
//	arrayShiftRight(arr, n, m,b);
//	for (i = 0; i < n; i++)
//		printf("%d ", b[i]);
//	return 0;
//}
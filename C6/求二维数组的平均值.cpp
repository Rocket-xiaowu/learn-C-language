//#include<stdio.h>
//
//static double matrixAvg(int M, int N,double a[][50])
//{
//	double total=0,aver;
//	for (int i = 0; i < M; i++)
//		for (int j = 0; j < N; j++)
//			total += a[i][j];
//	aver = total / (M * N);
//	return aver;
//}
//
//int main()
//{
//	int M, N;
//	scanf_s("%d%d", &M, &N);
//	double aver, a[50][50];
//	int i, j;
//	for (i = 0; i < M; i++)
//		for (j = 0; j < N; j++)
//			scanf_s("%lf", &a[i][j]);
//	aver = matrixAvg(M, N, a);
//	printf("%.2f\n", aver);
//	return 0;
//
//}
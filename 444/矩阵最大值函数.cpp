//#include<stdio.h>
//
//double maxArray(int n,double a[][5])
//{
//    double max,b[100];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            max = a[i][j] > a[i][j + 1] ? a[i][j] : a[i][j + 1];
//        }
//        b[i] = max;
//    }
//    for (int i = 0; i < n-1; i++)
//    {
//        max = b[i] > b[i + 1] ? b[i] : b[i + 1];
//    }
//    return max;
//}
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    double a[100][5];
//    int i, j;
//    for (i = 0; i < n; i++)
//        for (j = 0; j < 5; j++)
//            scanf_s("%lf", &a[i][j]);
//    //函数调用，传递矩阵行数及数组名
//    double max = maxArray(n, a);
//    printf("%.2f\n", max);
//    return 0;
//}
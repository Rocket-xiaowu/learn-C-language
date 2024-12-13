//#include<stdio.h>
//#include<stdlib.h>
//
//void sort(int a[], int n)
//{
//    int temp;
//    for (int i = 1; i <= n - 1; i++)
//    {
//        for (int j = 0; j < n - i; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int i, n;
//    scanf_s("%d", &n);
//    int* a = (int*)malloc(n * sizeof(int));
//    for (i = 0; i < n; i++) scanf_s("%d", &a[i]);
//    sort(a, n);
//    printf("After sorted the array is:");
//    for (i = 0; i < n; i++) printf(" %d", a[i]);
//    printf("\n");
//    return 0;
//}

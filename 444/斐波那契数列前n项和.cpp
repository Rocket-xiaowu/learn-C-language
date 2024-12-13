//#include <stdio.h>
//
//int fibSum(int n)
//{
//    if (n == 1)return 1;
//    if (n == 2)return 2;
//   int f1 = 1, f2 = 1, f3,sum=2;
//    while (n > 2)
//    {
//    	f3 = f1 + f2;
//    	f1 = f2;
//    	f2 = f3;
//    	n--;
//        sum += f3;
//    }
//    return sum;
//}
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    printf("%d", fibSum(n));
//    return 0;
//}
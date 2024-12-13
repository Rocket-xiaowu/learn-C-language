//#include<stdio.h>
//
//
//void sushu(int ints[])
//{
//	for (int i = 1; i < 100; i++)
//	{
//		for (int j = 2; j <= 7; j++)
//		{
//			if (ints[i] % j == 0)
//			{
//				if (ints[i] == j)
//					break;
//				else
//				{
//					ints[i] = 0;
//					break;
//				}
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int ints[100];
//	for (int i = 0; i < 100; i++)
//		ints[i] = i + 1;
//	sushu(ints);
//	for(int j=1;j<100;j++)
//		if (ints[j] != 0)
//		{
//			printf("%d ", ints[j]);
//		}
//	printf("\n");
//	return 0;
//}
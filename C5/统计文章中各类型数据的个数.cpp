//#include<stdio.h>
//#include<string.h>
//
//int lower(char chs[][80])
//{
//	int count = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; chs[i][j] != '\0'; j++)
//		{
//			if (chs[i][j] >= 'a' && chs[i][j] <= 'z') count++;;
//		}
//	}
//	return count;
//}
//
//int upper(char chs[][80])
//{
//	int count = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; chs[i][j] != '\0'; j++)
//		{
//			if ( chs[i][j] >= 'A' && chs[i][j] <= 'Z') count++;;
//		}
//	}
//	return count;
//}
//
//int number(char chs[][80])
//{
//	int count = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; chs[i][j] != '\0'; j++)
//		{
//			if (chs[i][j] >= '0' && chs[i][j] <= '9') count++;;
//		}
//	}
//	return count;
//}
//
//int space(char chs[][80])
//{
//
//	int count = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; chs[i][j] != '\0'; j++)
//		{
//			if (chs[i][j]==' ') count++;;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int low, up, num, empty, other;
//	char chs[3][80];
//	int total=0;
//	for (int i = 0; i < 3; i++)
//	{
//		gets_s(chs[i]);
//		total += strlen(chs[i]);
//	}
//	low = lower(chs);
//	up = upper(chs);
//	num = number(chs);
//	empty = space(chs);
//	other = total - low - up - num - empty;
//	printf("%d %d %d %d %d\n", up, low, num, empty, other);
//	return 0;
//}
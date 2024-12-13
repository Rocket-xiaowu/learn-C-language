//#include<stdio.h>
//#include<string.h>
//
//bool judgezimu(char ch)
//{
//	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')return true;
//	return false;
//}
//
//bool l_or_u(char ch)
//{
//	if (ch >= 'a' && ch <= 'z')return true;
//	return false;
//}
//
//void decrypt(char *chs)
//{
//	for (int i = 0; chs[i] != '\0'; i++)
//	{
//		if (judgezimu(chs[i]))
//		{
//			if (l_or_u(chs[i]))
//			{
//				chs[i] = 26 - (chs[i] - 97 + 1) + 1 + 96;
//				continue;
//			}
//			chs[i] = 26 - (chs[i] - 65 + 1) + 1 + 64;
//		}
//	}
//}
//
//int main()
//{
//	char s[100];
//	gets_s(s);
//	decrypt(s);
//	printf("%s", s);
//	return 0;
//}
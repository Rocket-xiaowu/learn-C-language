//#include<stdio.h>
//#include<string.h>
//
//int strminus(char s1[], char s2[])
//{
//	int max = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
//	for (int i = 0; i < max; i++)
//	{
//		if (s1[i] == s2[i]) continue;
//		if (s1[i] > s2[i]) return s1[i] - s2[i];
//		if (s1[i] < s2[i]) return s1[i] - s2[i];
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[100], s2[100];
//	gets_s(s1);
//	gets_s(s2);
//	printf("%d\n",strminus(s1, s2));
//	return 0;
//}
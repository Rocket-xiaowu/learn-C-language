//#include<stdio.h>
//#include<string.h>
//
//char* findStr(int n, char s[][101])
//{
//	char* chs[101];
//	*chs = s[0];
//	int index = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (strcmp(s[i], s[i + 1]) > 0)
//		{
//			*chs = s[i + 1];
//			index = i + 1;
//		}
//	}
//	for (int i = index; i < n-1; i++)
//	{
//		*s[i] = *s[i + 1];
//	}
//	*chs = s[0];
//	for (int i = 0; i < n - 2; i++)
//	{
//		if (strcmp(s[i], s[i + 1]) > 0)
//		{
//			*chs = s[i + 1];
//		}
//	}
//	return *chs;
//}
//
//int main()
//{
//	int n, i;
//	scanf_s("%d", &n);
//	getchar();  //���������n֮��Ļ��з�
//	char s[10][101];
//	for (i = 0; i < n; i++)
//		gets_s(s[i]);
//	//���ú����������ַ����ĸ�������ά������
//	char* pStr = findStr(n, s);
//	puts(pStr);
//	return 0;
//}
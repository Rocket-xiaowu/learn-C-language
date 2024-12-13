#include<stdio.h>

int whether_zimu(char chs)
{
	if ((chs > 'a' && chs < 'z') || (chs > 'A' && chs < 'Z')) return 1;
	return 0;
}

int main()
{
	int number=0;
	char str[100];
	fgets(str,sizeof(str),stdin);
	for (int i = 0; str[i]!='\0'; i++)
	{
		if (whether_zimu(str[i]) && !whether_zimu(str[i + 1]))
		{
			number++;
		}
	}
	printf("%d\n", number);
}
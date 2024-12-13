#include<stdio.h>

int shuweihe(int n)
{
	int shuzu[20];
	int he=0;
	int i = 0;
	while (n != 0)
	{
		shuzu[i] = n % 10;
		n = n / 10;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		he = he + shuzu[j];
	}
	return he;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	int he = shuweihe(n);
	printf("%d", he);
	return 0;
}

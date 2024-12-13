#include<stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	int ints[20][20];
	for (int i = 0; i < n; i++)
	{
		ints[i][i] = 1;
		ints[i][0] = 1;
		for (int j = 1; j < i&&i>1; j++)
		{
			ints[i][j] = ints[i - 1][j - 1] + ints[i - 1][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", ints[i][j]);
		}
		printf("\n");
	}
	return 0;
}

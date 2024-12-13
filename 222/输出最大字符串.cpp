#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	char ans[51];
	scanf_s("%s", ans);
	while (n--) {
		char s[51];
		scanf_s("%s", s);
		if (strcmp(s, ans) > 0) {
			strcpy_s(ans, s);
		}
	}
	printf("%s\n", ans);
	return 0;
}

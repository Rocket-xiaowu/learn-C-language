#include<stdio.h>
#include<string.h>


char bottle[101];
int index(char s[], char t[], int pos)
{
    int i = pos, j = 0, k=0;
    while (i < strlen(s) && j < strlen(t))
    {
        bottle[k] = s[i];
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
        k++;
    }
    if (j >= strlen(t)) return i - strlen(t) + 1;
    else return 0;
}

int main()
{
    int n;
    char s[101], t[101];
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 100; i++)
        {
            scanf_s("%c", &s[i]);
            if (s[i] == ' ')
            {
                s[i] = '\0';
                break;
            }
        }
        for (int i = 0; i < 100; i++)
        {
            scanf_s("%c", &t[i]);
            if (t[i] == '\n')
            {
                t[i] = '\0';
                break;
            }
        }
        n = index(s, t, 0);
        printf("%s\n", bottle);
        printf("%d\n", n);
    }
    return 0;
}

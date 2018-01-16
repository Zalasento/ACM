#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 1000

char(*a)[M];
char(*b)[M];
int main(void)
{
	int n, i, j;
	int la, lb;
	scanf("%d", &n);
	a = (char(*)[M])malloc(sizeof(char*)*n);
	b = (char(*)[M])malloc(sizeof(char*)*n);
	for (i = 0; i<n; i++)
	{
		scanf("%s%s", a[i], b[i]);
	}
	for (i = 0; i<n; i++)
	{
		printf("Case %d:\n", i + 1);
		printf("%s + %s = ", a[i], b[i]);
		la = strlen(a[i]), lb = strlen(b[i]);
		for (j = 0; j <= la / 2; j++)
		{
			char t = a[i][j];
			a[i][j] = a[i][la - j - 1];
			a[i][la - j - 1] = t;
		}
		for (j = 0; j <= lb / 2; j++)
		{
			char t = b[i][j];
			b[i][j] = b[i][lb - j - 1];
			b[i][lb - j - 1] = t;
		}
		for (j = la; j < M; j++)
			a[i][j] = '0';
		for (j = lb; j < M; j++)
			b[i][j] = '0';
		for (j = 0; j < M; j++)
		{
			a[i][j] += b[i][j]-'0';
			if (a[i][j] > '9')
			{
				a[i][j] -= 10;
				a[i][j + 1]++;
			}
		}
		for (j = M; j > 0; j--)
		{
			if (a[i][j-1] != '0')
			{
				j--;
				break;
			}
		}
		for (; j >= 0; j--)
			printf("%c", a[i][j]);
		printf("\n\n");
	}
	return 0;
}
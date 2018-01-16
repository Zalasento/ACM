#include <stdio.h>
#include <string.h>
#define M 300
void add(char *s1, char *s2);

int main(void)
{
    int i;
    char t;
    char a[M], b[M], sum[M];
    scanf("%s%s", a, b);
    add(a, b);
    return 0;
}

void add(char *s1, char *s2)
{
    int a[M], b[M];
    char sum[M];

    const int la = strlen(s1), lb = strlen(s2);
    int i, j;
    for (i = 0; i < M; i++)
    {
        a[i] = 0;
        b[i] = 0;
    }
    for (i = la - 1, j = 0; i >= 0; i--)
        a[j++] = s1[i] - '0';
    for (i = lb - 1, j = 0; i >= 0; i--)
        b[j++] = s2[i] - '0';
    for (i = 0; i < M; i++)
    {
        a[i] += b[i];
        if (a[i] > 9)
        {
            a[i] -= 10;
            a[i + 1]++;
        }
    }
    for (i = M; i > 0; i--)
    {
        if (a[i - 1] != 0)
        {
            i--;
            break;
        }
    }
    for (j = 0; i >= 0; i--)
        sum[j++] = a[i] + '0';
    sum[j] = '\0';
    printf("%s\n", sum);
}
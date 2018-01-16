#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    unsigned int n;
    unsigned int *num;
    unsigned int max;
    int i, j;
    scanf("%u", &n);
    num = (unsigned int *)malloc(sizeof(unsigned int) * n);
    for (i = 0; i < n; i++)
        num[i] = i + 1;
    for (i = 1; i < n; i++)
    {
        if (num[i] == 0)
            continue;
        for (j = num[i]; j <= n; j++)
        {
            max = num[i] * j;
            if (max > n)
                break;
            if (max > 0)
                num[max - 1] = 0;
        }
    }
    for (i = 1; i < n; i++)
    {
        if (num[i] != 0)
            printf("%d\n", num[i]);
    }
    return 0;
}
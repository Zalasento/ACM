#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    unsigned long long int *sum = (unsigned long long int *)malloc(sizeof(unsigned long long int) * T);
    unsigned long long int *a = (unsigned long long int *)malloc(sizeof(unsigned long long int) * T);
    unsigned long long int *b = (unsigned long long int *)malloc(sizeof(unsigned long long int) * T);
    for (int i = 0; i < T; i++)
    {
        scanf("%llu%llu", &a[i], &b[i]);
        sum[i] = a[i] + b[i];
        ;
    }
    for (int i = 0; i < T; i++)
    {
        printf("Case %d:\n", i + 1);
        printf("%llu + %llu = %llu", a[i], b[i], sum[i]);
		if (i != T - 1)
		{
			putchar('\n');
			putchar('\n');
		}
    }
    return 0;
}
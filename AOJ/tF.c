#include <stdio.h>
int main(void)
{
    unsigned long long n = 0;
    int k, t;
    unsigned long long num[10000];
    unsigned long long i, j;
    unsigned long long sum, bit;
    while (scanf("%llu", &n) != EOF)
    {
        k = 0;
        if (n < 500000000)
        {
            for (i = 1; i <= n; i++)
            {
                j = i;
                sum = j;
                do
                {
                    bit = j % 10;
                    sum += bit;
                    j /= 10;
                } while (j != 0);
                if (sum == n)
                    num[k++] = i;
            }
        }
        else
        {
            for (i = 500000000; i <= n; i++)
            {
                j = i;
                sum = j;
                do
                {
                    bit = j % 10;
                    sum += bit;
                    j /= 10;
                } while (j != 0);
                if (sum == n)
                    num[k++] = i;
            }
        }
        printf("%d\n", k);
        for (j = 0; j < k; j++)
            printf("%llu\n", num[j]);
    }
    return 0;
}
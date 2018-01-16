#include <stdio.h>
int main(void)
{
    unsigned long long n, m;
    unsigned long long day;
    int i, j;
    while (scanf("%llu%llu", &n, &m) != EOF)
    {
        if (n < m)
            day = n;
        else
            day = m;
        m++;
        if (n > m)
            day += (n - m) / 2 + 1;
        printf("%llu\n", day);
    }
    return 0;
}
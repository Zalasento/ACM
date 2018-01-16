#include <stdio.h>
int main(void)
{
    int T;
    unsigned long long m, n;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%llu%llu", &n, &m);
        printf("%llu\n", m * n / 2);
    }
    return 0;
}
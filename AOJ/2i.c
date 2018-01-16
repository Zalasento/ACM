#include <stdio.h>
int main(void)
{
    int num[1000];
    int n;
    long long sum;
    int i;
    while (scanf("%d", &n), n != 0)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &num[i]);
        sum = 1;
        for (i = 0; i < n; i++)
        {
            if (num[i] % 2 == 1)
                sum *= num[i];
        }
        printf("%lld\n", sum);
    }
    return 0;
}
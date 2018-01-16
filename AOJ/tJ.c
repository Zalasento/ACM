#include <stdio.h>
#include <math.h>
int main(void)
{
    unsigned long long xi, xj;
    int n;
    int i, j;
    int is = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        is = 1;
        scanf("%llu", &xi);
        if (sqrt(xi) - (int)sqrt(xi) == 0)
        {
            xj = sqrt(xi);
            if (sqrt(xj) - (int)sqrt(xj) > 0)
            {
                is = 1;
                for (j = 2; j <= sqrt(xj); j++)
                {
                    if (xj % j == 0)
                        is = 0;
                }
            }
            else
                is = 0;
        }
        else
            is = 0;
        if (is == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, m;
    double sum, t;
    int i;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        sum = n;
        t = n;
        for (i = 1; i < m; i++)
        {
            t = sqrt(t);
            sum += t;
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}
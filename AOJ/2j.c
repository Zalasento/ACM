#include <stdio.h>
int main(void)
{
    int t, i;
    int n;
    double max;
    double num[100];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%lf", &num[i]);
        }
        max = num[0];
        for (i = 0; i < n; i++)
        {
            if (num[i] > max)
                max = num[i];
        }
        printf("%.2f\n", max);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    int A[100], B[100];
    int sumA, sumB;
    int sum, times, preTimes, exchange;
    int i, j, noThink;
    while (scanf("%d", &n) != EOF)
    {
        noThink = 0;
        preTimes = 0;
        times = 0;
        exchange = 0;
        for (i = 0; i < n; i++)
            scanf("%d", &A[i]);
        for (i = 0; i < n; i++)
            scanf("%d", &B[i]);
        for (i = 1; i <= 5; i++)
        {
            sumA = sumB = 0;
            for (j = 0; j < n; j++)
            {
                if (A[j] == i)
                    sumA++;
                if (B[j] == i)
                    sumB++;
            }
            if ((sumA + sumB) % 2 != 0)
            {
                noThink = 1;
                break;
            }
            else
            {
                sum = (sumA + sumB) / 2;
                times += fabs(sum - sumA) - preTimes;
                exchange += fabs(sum - sumA);
                if (exchange % 2 == 0)
                    preTimes = 0;
                else
                    preTimes = fabs(sum - sumA);
            }
        }
        if (noThink == 1)
            printf("-1\n");
        else
            printf("%d\n", times);
    }
    return 0;
}
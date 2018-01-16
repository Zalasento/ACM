#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int TCases, t;
    int Num, n;
    int i, j;
    int Sum, MaxSum;
    int Left, Right;

    scanf("%d", &TCases);
    for (t = 1; t <= TCases; t++)
    {
        MaxSum = -1001;
        scanf("%d", &Num);
        int *a = (int *)malloc(sizeof(int) * Num);

        for (i = 0; i < Num; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] > MaxSum)
            {
                MaxSum = a[i];
                Left = i + 1;
                Right = i + 1;
            }
        }

        for (i = 0; i < Num; i++)
        {
            if (a[i] < 0)
            {
                continue;
            }
            Sum = 0;
            for (j = i; j < Num; j++)
            {
                Sum += a[j];
                if (Sum > MaxSum)
                {
                    MaxSum = Sum;
                    Left = i + 1;
                    Right = j + 1;
                }
                if (Sum < 0)
                {
                    break;
                }
            }
        }

        printf("Case %d:\n", t);
        printf("%d %d %d\n", MaxSum, Left, Right);
        if (t != TCases)
        {
            printf("\n");
        }
        free(a);
    }
    return 0;
}
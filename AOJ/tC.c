#include <stdio.h>
int zuhe(int, int);
int main(void)
{
    int T, t;
    int n, m, k;
    int hard, chooseHard;
    int sum;
    int i, j;
    scanf("%i", &T);
    for (t = 0; t < T; t++)
    {
        sum = 0;
        scanf("%d%d%d", &n, &m, &k);
        hard = n - m;
        if (k >= m)
        {
            for (i = 1; i <= m; i++)
            {
                chooseHard = k - i;
                sum += zuhe(i, m) * zuhe(chooseHard, hard);
            }
        }
        else
        {
            for (i = 1; i <= k; i++)
            {
                chooseHard = k - i;
                if (chooseHard > 0)
                    sum += zuhe(i, m) * zuhe(chooseHard, hard);
                else
                    sum += zuhe(i, m);
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}

int zuhe(int k, int n)
{
    int i, j;
    int cSumA = 1, cSumB = 1;
    for (i = 0; i < k; i++)
    {
        cSumA *= n - i;
    }
    for (i = 1; i <= k; i++)
        cSumB *= i;
    return cSumA / cSumB;
}
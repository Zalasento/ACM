#include <stdio.h>
#include <math.h>
int main(void)
{
    int M, N, i, Num;
    int Count = 0;
    while (scanf("%d%d", &M, &N) != EOF)
    {
        for (i = M; i <= N; i++)
        {
            Num = pow(i / 100, 3) + pow(i / 10 % 10, 3) + pow(i % 10, 3);
            if (i == Num)
            {
                if (Count != 0)
                    printf(" %d", Num);
                else
                    printf("%d", Num);
                Count++;
            }
        }
        if (Count == 0)
            printf("no\n");
        else
            printf("\n");
        Count = 0;
    }
    return 0;
}
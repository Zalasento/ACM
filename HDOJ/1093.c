#include <stdio.h>
int main(void)
{
    int N, M;
    int i, j, t;
    int sum;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &M);
        sum = 0;
        for (j = 0; j < M; j++)
        {
            scanf("%d", &t);
            sum += t;
        }
        printf("%d\n", sum);
    }
    return 0;
}
#include <stdio.h>
int main(void)
{
    int N, M, T;
    int i, j, m, n;
    char D[2][11][11];
    int C;
    scanf("%d", &C);
    while (C--)
    {
        scanf("%d%d%d", &N, &M, &T);
        for (i = 0; i < N; i++)
            scanf("%s", D[0][i]);
        getchar();
        for (i = 0; i < N; i++)
            scanf("%s", D[1][i]);
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++)
                if (D[0][i][j] == 'S')
                {
                    m = i;
                    n = j;
                }
        }
    return 0;
}
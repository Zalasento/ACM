#include <stdio.h>
int main(void)
{
    int N;
    int i;
    int time;
    int Num[1000];
    Num[0] = 0;
    while (scanf("%d", &N), N != 0)
    {
        time = 0;
        for (i = 1; i <= N; i++)
            scanf("%d", &Num[i]);
        for (i = 1; i <= N; i++)
        {
            if (Num[i] - Num[i - 1] > 0)
                time += (Num[i] - Num[i - 1]) * 6 + 5;
            else
                time += (Num[i - 1] - Num[i]) * 4 + 5;
        }
        printf("%d\n", time);
    }
    return 0;
}
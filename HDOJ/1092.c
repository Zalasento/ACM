#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int Num, Sum;
    int i;
    int *Array;
    while (scanf("%d", &Num), Num)
    {
        Array = (int *)malloc(sizeof(int) * Num);
        Sum = 0;
        for (i = 0; i < Num; i++)
        {
            scanf("%d", &Array[i]);
            Sum += Array[i];
        }
        printf("%d\n", Sum);
        free(Array);
    }
    return 0;
}
#include <stdio.h>
int main(void)
{
    int num;
    float t;
    int zhen, fu, zero;
    int i;
    while (scanf("%d", &num), num != 0)
    {
        zhen = fu = zero = 0;
        for (i = 0; i < num; i++)
        {
            scanf("%f", &t);
            if (t > 0)
                zhen++;
            else if (t < 0)
                fu++;
            else
                zero++;
        }
        printf("%d %d %d\n", fu, zero, zhen);
    }
    return 0;
}
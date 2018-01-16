#include <stdio.h>
int main(void)
{
    double x;
    while (scanf("%lf", &x) != EOF)
    {
        if (x < 0)
            x = -x;
        printf("%.2f\n", x);
    }
    return 0;
}
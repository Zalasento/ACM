#include <stdio.h>
#include <math.h>
int isPrime(long sum);
int main(void)
{
    float x, y;
    long sum;
    int t, OK;
    while (scanf("%f%f", &x, &y), x != 0 || y != 0)
    {
        OK = 1;
        t = (int)x;
        if (t < x)
            t += 1;
        for (; t <= y; t++)
        {
            sum = pow(t, 2) + t + 41;
            if (isPrime(sum) == 0)
            {
                OK = 0;
                break;
            }
        }
        if (OK == 0)
            printf("Sorry\n");
        else
            printf("OK\n");
    }
}

int isPrime(long sum)
{
    int i;
    for (i = 2; i < sqrt(sum); i++)
        if (sum % i == 0)
            return 0;
    return 1;
}
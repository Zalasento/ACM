#include <stdio.h>
int IsPrime(int x);

int main(void)
{
    int num;
    int i;
    while ((scanf("%d", &num), num))
    {
        printf("%d=", num);
        if (IsPrime(num) == 1)
        {
            printf("%d\n", num);
            continue;
        }
        for (i = 2; i < num; i++)
        {
            if (IsPrime(i) == 0)
                continue;
            if (num % i == 0)
            {
                printf("%d", i);
                num /= i;
                break;
            }
        }
        for (; 1; i++)
        {
            if (IsPrime(i) == 0)
                continue;
            if (num % i == 0)
            {
                printf("*%d", i);
                num /= i;
                i = 1;
                if (num == 1)
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}

int IsPrime(int x)
{
    int j;
    if (x == 1)
        return 0;
    for (j = 2; j < x; j++)
    {
        if (x % j == 0)
            return 0;
    }
    return 1;
}
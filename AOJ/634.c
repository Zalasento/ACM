#include <stdio.h>
int IsPrime(int);

int main(void)
{
    int t, num;
    int i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        if (IsPrime(num) == 1)
            printf("Yes\n");
        else
            printf("No\n");
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
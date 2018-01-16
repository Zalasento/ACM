#include <stdio.h>
#include <math.h>
int main(void)
{
    int left, right, sum;
    int i, count;
    int one, ten, hundred;
    while (scanf("%d%d", &left, &right) != EOF, left > 99 && right < 1000 && left <= right)
    {
        count = 0;
        for (i = left; i < right + 1; i++)
        {
            one = i % 10;
            ten = i / 10 % 10;
            hundred = i / 100;
            sum = pow(one, 3) + pow(ten, 3) + pow(hundred, 3);
            if (sum == i)
            {
                if (count == 0)
                    printf("%d", i);
                else
                    printf(" %d", i);
                count++;
            }
        }
        if (count == 0)
            printf("no\n");
        else
            putchar('\n');
    }
    return 0;
}
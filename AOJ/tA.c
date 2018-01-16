#include <stdio.h>
int main(void)
{
    long long n, sum;
    int i;
    char lls[20];
    while (scanf("%lld", &n) != EOF)
    {
        sum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%s", lls);
            switch (lls[0])
            {
            case 'T':
                sum += 4;
                break;
            case 'C':
                sum += 6;
                break;
            case 'O':
                sum += 8;
                break;
            case 'D':
                sum += 12;
                break;
            case 'I':
                sum += 20;
                break;
            default:
                break;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
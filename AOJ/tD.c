#include <stdio.h>
int main(void)
{
    int n, a, b, c;
    int l = 1;
    int i, j, min;
    int sum = 0;
    scanf("%d%d%d%d", &n, &a, &b, &c);
    for (i = 2; i <= n; i++)
    {
        switch (l)
        {
        case 1:
            sum += (a > b) ? b : a;
            l = (a > b) ? 3 : 2;
            break;
        case 2:
            sum += (a > c) ? c : a;
            l = (a > c) ? 3 : 1;
            break;
        case 3:
            sum += (b > c) ? c : b;
            l = (b > c) ? 2 : 1;
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}
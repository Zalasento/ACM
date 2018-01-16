#include <stdio.h>
int main(void)
{
    long n, t;
    int k, l, delete;
    char ch;
    char strA[15], strB[15];
    int i, j, yes;
    while (scanf("%ld%d", &n, &k) != EOF)
    {
        t = n;
        i = 0;
        yes = 0;
        do
        {
            strA[i++] = '0' + t % 10;
            t /= 10;
        } while (t != 0);
        strA[i] = '\0';
        l = i;
        for (i = 0; i < l; i++)
        {
            if (strA[i] == '0')
                yes++;
            if (yes == k)
                break;
        }
        if (yes == k)
            delete = i + 1 - k;
        else
            delete = l - 1;
        printf("%d\n", delete);
    }
    return 0;
}
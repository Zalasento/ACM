#include <stdio.h>
int main(void)
{
    char a, b, c, t;
    while ((a = getchar()) != EOF)
    {
        b = getchar();
        c = getchar();
        getchar();
        if (a > b)
        {
            t = a;
            a = b;
            b = t;
        }
        if (a > c)
        {
            t = a;
            a = c;
            c = t;
        }
        if (b > c)
        {
            t = b;
            b = c;
            c = t;
        }
        printf("%c %c %c\n", a, b, c);
    }
    return 0;
}
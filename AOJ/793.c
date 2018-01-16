#include <stdio.h>
#include <string.h>
#define Max 2001

int main(void)
{
    char s[Max];
    int i;
    int time;
    while (scanf("%s", s) != EOF)
    {
        time = 0;
        for (i = 0; s[i] != 'O' && i < Max; i++)
        {
            if (s[i] == 'M')
                time += 8;
            else
                time += 12;
        }
        printf("%d\n", time);
    }
    return 0;
}
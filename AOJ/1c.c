#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x;
    char ch;
    while (scanf("%d", &x) != EOF)
    {
        if (x < 0 || x > 100)
        {
            printf("Score is error!\n");
            continue;
        }
        switch (x / 10)
        {
        case 6:
            ch = 'D';
            break;
        case 7:
            ch = 'C';
            break;
        case 8:
            ch = 'B';
            break;
        case 9:
        case 10:
            ch = 'A';
            break;
        default:
            ch = 'E';
            break;
        }
        printf("%c\n", ch);
    }
    return 0;
}
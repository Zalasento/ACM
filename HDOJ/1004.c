#include <stdio.h>
#include <string.h>
typedef struct
{
    char Color[15];
    int number;
} Balloon;
int main(void)
{
    int Num, i, j;
    Balloon bal[1000];
    char CurrentColor[15];
    char MaxColor[15];
    int Max = 0;
    int change;
    while (scanf("%d", &Num) && Num > 0)
    {
        for (i = 0; i < 1000; i++)
            bal[i].number = 0;
        change = 0;
        for (i = 0; i < Num; i++)
        {
            scanf("%s", CurrentColor);
            for (j = 0; j < i; j++)
            {
                if (strcpy(CurrentColor, bal[j].Color) == 0)
                {
                    change = 1;
                    bal[j].number++;
                }
                if (!change)
                {
                    strcpy(bal[i].Color, CurrentColor);
                    bal[i].number++;
                }
            }
        }
        Max = 0;
        for (i = 0; bal[i].number != 0; i++)
        {
            if (Max < bal[i].number)
            {
                Max = bal[i].number;
                strcpy(MaxColor, bal[i].Color);
            }
        }
        printf("%s\n", MaxColor);
    }
    return 0;
}
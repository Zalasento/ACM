#include <stdio.h>
int main(void)
{
    unsigned int box[3], gift[3];
    int i, j, t;
    int isTrue;
    while (scanf("%d%d%d", &box[0], &box[1], &box[2]), box[0] != 0 && box[1] != 0 && box[2] != 0)
    {
        isTrue = 1;
        for (i = 0; i < 3; i++)
            scanf("%d", &gift[i]);
        for (i = 0; i < 2; i++)
            for (j = i; j < 3; j++)
            {
                if (box[i] > box[j])
                {
                    t = box[i];
                    box[i] = box[j];
                    box[j] = t;
                }
            }
        for (i = 0; i < 2; i++)
            for (j = i; j < 3; j++)
            {
                if (gift[i] > gift[j])
                {
                    t = gift[i];
                    gift[i] = gift[j];
                    gift[j] = t;
                }
            }
        for (i = 0; i < 3; i++)
            if (gift[i] > box[i])
            {
                isTrue = 0;
                break;
            }
        if (isTrue == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
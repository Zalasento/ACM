#include <stdio.h>
int main(void)
{
    unsigned int score;
    while(scanf("%d",&score)!=EOF)
    {
        if(score>100)
            printf("Score is error!\n");
        else
        switch(score/10)
        {
            case 10:
            case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            default:
                printf("E\n");
                break;
            }
    }
    return 0;
}
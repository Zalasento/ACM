#include <stdio.h>
int run(unsigned int);
int main(void)
{
    unsigned int year, mouth, day,num;
    int i;
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(scanf("%u/%u/%u",&year,&mouth,&day)!=EOF)
    {
        num = 0;
        if(run(year)==1)
            for (i = 0; i < mouth - 1;i++)
                num += b[i];
        else
            for (i = 0; i < mouth - 1;i++)
                num += a[i];
        num += day;
        printf("%u\n", num);
    }
}

int run(unsigned int year)
{
    if((year%4==0 && year%100!=0) || year%400==0)
        return 1;
    else
        return 0;
}
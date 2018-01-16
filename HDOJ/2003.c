#include <stdio.h>
int main(void)
{
    double num;
    while(scanf("%lf",&num)!=EOF)
    {
        if(num<0)
            num = -num;
        printf("%.2f\n", num);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x1, y1, x2, y2,s;
    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF)
    {
        s = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
        printf("%.2f\n", s);
    }
    return 0;
}
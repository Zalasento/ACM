#include <stdio.h>
#include <math.h>
#define PI 3.1415927
int main(void)
{
    double radius, volume;
    while(scanf("%lf",&radius)!=EOF)
    {
        volume = (4.0 / 3) * PI * pow(radius, 3);
        printf("%.3f\n", volume);
    }
}
#include <stdio.h>
int main(void)
{
    int n, i, a[50], sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum = 1;
        for (i = 0; i < n;i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n;i++)
        {
            if(a[i]%2!=0)
                sum *= a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
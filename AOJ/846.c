#include <stdio.h>
int main(void)
{
    int n, m;
    int a[3100], b[3100];
    int i, j;
    int need = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                a[3099] = a[i];
                a[i] = a[j];
                a[j] = a[3099];
            }
        }
    for (i = 0; i < m - 1; i++)
        for (j = i + 1; j < m; j++)
        {
            if (b[i] > b[j])
            {
                b[3099] = b[i];
                b[i] = b[j];
                b[j] = b[3099];
            }
        }
    for (i = 0, j = 0; i < n; i++, j++)
    {
        for (; a[i] > b[j] && j < m; j++)
            ;
        if (j >= m)
            break;
    }
    need = n - i;
    printf("%d\n", need);
    return 0;
}
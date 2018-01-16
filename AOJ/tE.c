#include <stdio.h>
int main(void)
{
    int n, k, m;
    int array[100000];
    int i, j, t, min, count;
    int sum, is;
    while (scanf("%d%d%d", &n, &k, &m) != EOF)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &array[i]);
        for (i = 0; i < n - 1; i++)
        {
            min = i;
            for (j = i + 1; j < n; j++)
                if (array[min] > array[j])
                    min = j;
            if (min != i)
            {
                t = array[i];
                array[i] = array[min];
                array[min] = t;
            }
        }
        count = 1;
        is = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; (sum = i + m * j) <= array[n - 1]; j++)
            {
                for (t = i; t < n; t++)
                {
                    if (sum == array[t])
                        count++;
                    if (count == k)
                    {
                        is = 1;
                        break;
                    }
                }
                if (is == 1)
                    break;
                else
                    count = 1;
            }
            if (is == 1)
                break;
        }
        if (is == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
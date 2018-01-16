#include <stdio.h>
#include <string.h>
int main(void)
{
    int numWord;
    int i, j, m, n, p, q;
    int left, right;
    int l;
    int same;
    char str[1000], worda[30], wordb[30];
    while (scanf("%s", str), str[0] != '#')
    {
        numWord = 0;
        left = 0;
        for (right = left; str[right] != '\0'; right++)
        {
            same = 0;
            if (str[right] == ' ')
            {
                for (j = left; j < right; j++)
                    worda[j - left] = str[j];
                worda[j - left] = '\0';
                for (j = right + 1, m = j; str[j] != '\0'; j++)
                {
                    if (str[j] == ' ')
                    {
                        for (n = m; n < j; n++)
                            wordb[n - m] = str[n];
                        wordb[n - m] = '\0';
                        if (strcmp(worda, wordb) == 0)
                        {
                            same = 1;
                            break;
                        }
                        m = j + 1;
                    }
                }
                left = right + 1;
                if (same == 0)
                    numWord++;
            }
        }
        printf("%d\n", numWord);
        numWord = 0;
    }
    return 0;
}
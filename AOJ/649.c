#include <stdio.h>
#include <string.h>
int main(void)
{
    int i, l;
    int same;
    char str1[101], str2[101];
    while (scanf("%s", str1) != EOF)
    {
        l = strlen(str1);
        for (i = 0; i < l; i++)
            str2[i] = str1[l - 1 - i];
        str2[i] = '\0';
        same = strcmp(str1, str2);
        if (same == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
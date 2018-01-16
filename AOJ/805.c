#include <stdio.h>
#include <string.h>
#define Max 11
void Swap(char *, char *);
void Perm(char list[], int, int);

int main(void)
{
    char s[Max];
    int i, j, l;
    char t;
    while (scanf("%s", s) != EOF)
    {
        l = 0;
        for (i = 0; s[i] != '\0'; i++)
            l++;
        for (i = 0; i < l - 1; i++)
        {
            for (j = i + 1; j < l; j++)
            {
                if (s[i] > s[j])
                {
                    t = s[i];
                    s[i] = s[j];
                    s[j] = t;
                }
            }
        }
        Perm(s, 0, l - 1);
    }
    return 0;
}

void Swap(char *a, char *b)
{ // 交换a和b
    char temp = *a;
    *a = *b;
    *b = temp;
}

void Perm(char list[], int k, int m)
{ //生成list [k：m ]的所有排列方式
    int i;
    if (k == m)
    { //输出一个排列方式
        for (i = 0; i <= m; i++)
            putchar(list[i]);
        putchar('\n');
    }
    else // list[k：m ]有多个排列方式
        // 递归地产生这些排列方式
        for (i = k; i <= m; i++)
        {
            Swap(&list[k], &list[i]);
            Perm(list, k + 1, m);
            Swap(&list[k], &list[i]);
        }
}
#include <cstdio>
#include <cstring>
#include <iostream>
int dp(int);
int f[10][10];
int bit[10];
int n, m;
int main(void)
{
    int i, j, k;
    f[0][0] = 1;
    for (i = 1; i <= 7; i++)
        for (j = 0; j <= 9; j++)
        {
            if (j == 4)
                continue;
            for (k = 0; k <= 9; k++)
            {
                if (j == 6 && k == 2 || k == 4)
                    continue;
                f[i][j] += f[i - 1][k];
            }
        }
    while (std::cin >> n >> m && n + m)
    {
        m++;
        int t1 = n, t2 = m, l1 = 0, l2 = 0;
        while (t1)
        {
            l1++;
            bit[l1] = t1 % 10;
            t1 /= 10;
        }
        t1 = dp(l1);
        while (t2)
        {
            l2++;
            bit[l2] = t2 % 10;
            t2 /= 10;
        }
        t2 = dp(l2);
        std::cout << t2 - t1 << std::endl;
    }
    return 0;
}

int dp(int len)
{
    int ans = 0;
    int i, j;
    bit[len + 1] = 0;
    for (i = len; i > 0; i--)
    {
        for (j = 0; j < bit[i]; j++)
        {
            if (j == 2 && bit[i + 1] == 6)
                continue;
            if (bit[i + 1] == 1 && bit[i] == 0)
                break;
            ans += f[i][j];
        }
        if (bit[i] == 4 || (bit[i] == 2 && bit[i + 1] == 6))
            break;
    }
    return ans;
}
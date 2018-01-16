#include <iostream>
int main()
{
    unsigned int n, m, length;
    char str[7];
    std::cin >> n;
    std::cin >> m;
    length = m - n + 1;
    while (n != 0 || m != 0)
    {
        for (; n <= m; n++)
        {
            sprintf(str, "%u", n);
            if (strstr(str, "4") != NULL || strstr(str, "62") != NULL)
                length--;
        }
        std::cout << length << std::endl;
        std::cin >> n;
        std::cin >> m;
        length = m - n + 1;
    }
    return 0;
}
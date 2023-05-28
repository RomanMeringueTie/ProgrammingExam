// Задача проверки корректности IP адреса узла
#include <stdio.h>

int ip(char *ip)
{
    int countPoint = 0;
    for (int i = 0; ip[i] != '\0'; i++)
    {
        if (ip[i] != '.')
        {
            if (ip[i] >= 48 && ip[i] <= 57)
                continue;
            else
                return 0;
        }
        if (ip[i] == '.')
            countPoint++;
    }
    if (ip[0] != '.' && countPoint == 3)
        return 1;
    else
        return 0;
}

int main()
{
    char *bad = "192.168.1.1";
    char *good = "192.168.1.1.";
    int result = ip(bad);
    printf("%d\n", result);
    result = ip(good);
    printf("%d\n", result);
}
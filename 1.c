#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int str_to_int(char *string)
{
    int result = 0;
    int d = strlen(string) - 1;
    for (int i = 0; i < strlen(string); i++)
    {
        result += (string[i] - 48) * pow(10, d);
        d--;
    }
    return result;
}

int is_symbol_right(char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
            continue;
        else
            return 0;
    }
    return 1;
}

int ip_checker(char *ip)
{
    char *copy = malloc(strlen(ip));
    strcpy(copy, ip);
    char *tmp = strtok(copy, ".");
    int count = 0;
    while (tmp != NULL)
    {
        if (is_symbol_right(tmp) == 0)
        {
            printf("No\n");
            free(copy);
            return 0;
        }
        if (str_to_int(tmp) >= 0 && str_to_int(tmp) <= 255)
            count++;
        else
            break;
        tmp = strtok(NULL, ".");
    }
    if (count == 4)
        printf("Yes\n");
    else
        printf("No\n");
    free(copy);
    return 0;
}

int main()
{
    char *good = "91.196.245.216";
    char *bad1 = "100.254.3.";
    char *bad2 = "91.196.245.256";
    ip_checker(good);
    ip_checker(bad1);
    ip_checker(bad2);
    return 0;
}
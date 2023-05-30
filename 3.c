// Определение префикса строки, не содержащего недопустимых символов.
#include <stdio.h>

int prefix(char *string, char *reject)
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        for (int j = 0; reject[j] != '\0'; j++)
        {
            if (string[i] == reject[j])
            {
                return count;
            }
        }
        count++;
    }
    return count;
}

int main()
{
    char *string = "pasharoma";
    char *reject = "ochnev";
    int result = prefix(string, reject);
    printf("%d\n", result);
    return 0;
}

//  Определение префикса строки, состоящего только из допустимых символов.
#include <stdio.h>

int prefix(char *string, char *accept)
{
    int count = 0;
    int isContinue = 1;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isContinue == 1)
            for (int j = 0; accept[j] != '\0'; j++)
            {
                if (string[i] == accept[j])
                {
                    count++;
                    isContinue = 1;
                    break;
                }
                isContinue = 0;
            }
    }
    return count;
}

int main()
{
    char *string = "romapasha";
    char *accept = "artemochnev";
    int result = prefix(string, accept);
    printf("%d\n", result);
    return 0;
}

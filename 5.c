// Поиск подстроки в строке.
#include <stdio.h>

int patternSearch(char* string, char* pattern)
{
    int matchCount = 0;
    int patlen = 0;
    int slen = 0;
    for (int i = 0; pattern[i] != '\0'; i++)
        patlen++;
    for (int i = 0; string[i] != '\0'; i++)
        slen++;
    for (int i = 0; string[i] != '\0'; i++) {
        matchCount = 0;
        for (int j = 0; pattern[j] != '\0'; j++) {
            if (string[i + j] == pattern[j]) {
                matchCount++;
            } else
                break;
            if (matchCount == patlen)
                return i;
        }
    }
    return -1;
}

int main()
{
    char* string = "romapasha";
    char* pattern = "mapa";
    int result = patternSearch(string, pattern);
    printf("%d\n", result);
    return 0;
}

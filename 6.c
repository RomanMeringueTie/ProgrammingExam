// Перевод числа в строковое представление
#include <stdio.h>
#include <stdlib.h>

char* numToStr(int number, char* string)
{
    int slen = 0;
    while (number != 0) {
        *string = number % 10 + 48;
        number /= 10;
        (string)++;
        slen++;
    }
    *string = '\0';
    string -= slen;
    char numstr[slen];
    for (int i = 0; i < slen; i++)
        numstr[slen - 1 - i] = (string)[i];
    numstr[slen] = '\0';
    for (int i = 0; numstr[i] != '\0'; i++)
        string[i] = numstr[i];
    return string;
}

int main()
{
    int number = 10128;
    char* string = malloc(100);
    char* result = numToStr(number, string);
    printf("%s\n", result);
    free(string);
    return 0;
}

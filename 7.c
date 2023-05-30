// Перевод символов строки в число.
#include <stdio.h>

int strToNum(char* string)
{
    int num = 0;
    int slen = 0;
    int n = 1;
    for (int i = 0; string[i] != '\0'; i++) {
        slen++;
    }
    for (int i = 0; string[i] != '\0'; i++, n *= 10) {
        num += (string[slen - 1 - i] - 48) * n;
    }
    return num;
}

int main()
{
    char* string = "1234";
    int number = strToNum(string);
    printf("%d\n", number);
    return 0;
}

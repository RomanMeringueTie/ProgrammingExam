// Преобразование CamelCase в snake_case.
#include <stdio.h>

char* changer(char* str)
{
    int slen = 0;
    int count = 0;
    int diff = 'a' - 'A';
    for (int i = 0; str[i] != '\0'; i++)
        slen++;
    if (str[0] <= 'Z')
        str[0] += diff;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] <= 'Z')
            count++;
    int lenfinal = slen + count;
    for (int i = slen - 1; i > 0; i--) {
        str[i + count] = str[i];
        if (str[i] > 'Z') {
            continue;
        } else {
            count--;
        }
    }
    for (int i = lenfinal; i > 0; i--) {
        if ((str[i] < 'Z' && str[i + 1] < 'Z') || str[i + 1] < 'Z') {
            str[i] = '_';
            str[i + 1] += diff;
        }
    }
    str[lenfinal] = '\0';
    return str;
}

int main()
{
    char string[100] = "PashaArtemRoma";
    printf("%s\n", changer(string));
}

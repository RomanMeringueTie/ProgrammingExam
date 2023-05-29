// Копирование строки.
#include <stdio.h>
#include <stdlib.h>

char *scopy(char *dest, char *src)
{
    int slen = 0;
    for (int i = 0; src[i] != '\0'; i++)
    {
        slen++;
        dest[i] = src[i];
    }
    dest[slen] = '\0';
    return dest;
}

int main()
{
    char *string = "pasharomaartem";
    char *copy = malloc(sizeof(string));
    copy = scopy(copy, string);
    printf("%s\n", copy);
    free(copy);
    return 0;
}
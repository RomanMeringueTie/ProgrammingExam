// Конкатенация строк.
#include <stdio.h>
#include <stdlib.h>

char* scat(char* one, char* two)
{
    int onelen = 0;
    int twolen = 0;
    for (int i = 0; one[i] != '\0'; i++)
        onelen++;
    for (int i = 0; two[i] != '\0'; i++) {
        one[onelen + i] = two[i];
        twolen++;
    }
    one[onelen + twolen] = '\0';
    return one;
}

int main()
{
    char one[20] = "pasha";
    char* two = "roma";
    printf("%s\n", scat(one, two));
    return 0;
}

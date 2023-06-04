// Сравнение строк по алфавиту.
#include <stdio.h>

int strcmpxuy(char* str, char* ptr)
{
    for (int i = 0; str[i] != '\0' || ptr[i] != '\0'; i++) {
        if (str[i] != ptr[i]) {
            return str[i] - ptr[i];
        }
    }
    return 0;
}

int main()
{
    char str[100] = "nigger";
    char ptr1[100] = "nigger";
    printf("%d\n", strcmpxuy(str, ptr1));
    char ptr2[100] = "nisgger";
    printf("%d\n", strcmpxuy(str, ptr2));
    return 0;
}

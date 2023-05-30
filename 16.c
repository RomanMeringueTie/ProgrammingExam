#include <stdio.h>
#include <stdlib.h>

int str_len(char* number)
{
    int len;
    for (int i = 0; number[i] != 0; i++) {
        len = i;
    }
    len++;
    return len;
}

int main()
{
    char* number = malloc(100);
    int num;
    int flag = 0;
    int sumchet = 0;
    int sumnechet = 0;
    int data;
    scanf(" %s", number);
    scanf(" %d", &num);
    while (flag == 0) {
        if (num == 0) {
            flag = 1;
            break;
        }
        if ((num % 10) % 2 == 0)
            sumchet += num % 10;
        else
            sumnechet += num % 10;
        num /= 10;
    }
    printf("chet: %d, nechet: %d\n", sumchet, sumnechet);
    sumchet = 0;
    sumnechet = 0;
    for (int i = 0; i < str_len(number); i++) {
        data = number[i] - 48;
        if (data % 2 == 0)
            sumchet += data;
        else
            sumnechet += data;
    }
    printf("chet: %d, nechet: %d\n", sumchet, sumnechet);
}

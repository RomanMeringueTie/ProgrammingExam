#include <stdio.h>

int my_strtok(char* src, char sym, char** strs)
{
    int i = 0;
    int numstrs = 0;
    strs[0] = src;
    while (src[i] != '\0') {
        if (src[i] == sym) {
            src[i] = '\0';
            i++;
            numstrs++;
            strs[numstrs] = &(src[i]);
        }
        i++;
    }
    numstrs++;
    return numstrs;
}

void my_suntok(char* str, char delim, char** ptr, int cnt)
{
    for (int i = 1; i < cnt; i++) {
        *(ptr[i] - 1) = delim;
    }
}

int main()
{
    char* strs[16];
    char srcstr[] = "/user/bin/41205/11037";
    int numstrs = my_strtok(srcstr, '/', strs);
    for (int i = 0; i < numstrs; i++) {
        printf("%s\n", strs[i]);
    }
    my_suntok(srcstr, '/', strs, numstrs);
    printf("%s\n", srcstr);
    return 0;
}

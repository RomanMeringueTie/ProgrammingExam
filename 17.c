#include <stdio.h>

int str_len(char* number)
{
    int len;
    for (int i = 0; number[i] != 0; i++) {
        len = i;
    }
    len++;
    return len;
}

int char_cnt(char* str, char* srcstr){
	int cnt = 0;
	for(int i = 0; i < str_len(str); i++){
		for(int j = 0; j < str_len(srcstr); j++){
			if(srcstr[j] == str[i]){
				cnt++;
			}
		}
	} 
	return cnt;
}

int main(){
	char str[]="halo!";
	char srcstr[] = "hello world!";
	printf("%d\n", char_cnt(str,srcstr));
}

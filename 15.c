// Преобразование snake_case в CamelCase
#include <stdio.h>

char *camel_s_knopkoi(char *str) {
  if (str[0] >= 97 && str[0] <= 122) {
    str[0] = str[0] - 32;
  }
  for (int i = 1; str[i] != '\0'; i++) {
    if (str[i] == '_') {
      if (str[i + 1] >= 97 && str[i + 1] <= 122) {
        str[i + 1] = str[i + 1] - 32;
      }
      for (int j = i; str[j] != '\0'; j++) {
        str[j] = str[j + 1];
      }
    }
  }
  return str;
}

int main() {
  char str[100] = "snake_case";
  printf("%s\n", str);
  char *ptr = camel_s_knopkoi(str);
  printf("%s\n", ptr);
  return 0;
}

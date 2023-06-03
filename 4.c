// Вставка/удаление фрагмента строки.
#include <stdio.h>

char *del(char *str, int number, int count) {
  number--;
  for (int i = 0; i != count; i++) {
    for (int j = number; str[j] != '\0'; j++) {
      str[j] = str[j + 1];
    }
  }
  return str;
}

char *add(char *str, char *ptr, int number) {
  number--;
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  for (int i = 0; ptr[i] != '\0'; i++) {
    str[len + i + 1] = '\0';
    str[len + i] = ' ';
    for (int j = len + i; j != number; j--) {
      str[j] = str[j - 1];
    }
  }
  for (int i = 0; ptr[i] != '\0'; i++) {
    str[number + i] = ptr[i];
  }
  return str;
}

int main() {
  char str[100] = "nigger";
  printf("%s\n", str);
  char *ptr = del(str, 3, 2);
  printf("%s\n", ptr);
  ptr = add(ptr, "haha", 3);
  printf("%s\n", ptr);
  return 0;
}

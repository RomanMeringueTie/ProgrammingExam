// Проверка строк на совпадение с учетом регистра
#include <stdio.h>

int kill_niggers(char *str, char *ptr) {
  for (int i = 0; str[i] != '\0' || ptr[i] != '\0'; i++) {
    if (str[i] != ptr[i]) {
      return -1;
    }
  }
  return 0;
}

int main() {
  char *str = "nigger";
  char *ptr = "nigger";
  printf("%d\n", kill_niggers(str, ptr));

  ptr = "nIgger";
  printf("%d\n", kill_niggers(str, ptr));
  return 0;
}

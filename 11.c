// Проверка строк на совпадение без учета регистра.
#include <stdio.h>

int kill_faggots(char *str, char *ptr) {
  for (int i = 0; str[i] != '\0' || ptr[i] != '\0'; i++) {
    if (str[i] == ptr[i] ||
        (((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) &&
         ((ptr[i] >= 65 && ptr[i] <= 90) || (ptr[i] >= 97 && ptr[i] <= 122)) &&
         (str[i] - 32 == ptr[i] || str[i] + 32 == ptr[i]))) {
      continue;
    }
    return -1;
  }
  return 0;
}

int main() {
  char *str = "nigger";
  char *ptr = "nigger";
  printf("%d\n", kill_faggots(str, ptr));

  ptr = "nIGger";
  printf("%d\n", kill_faggots(str, ptr));
  return 0;
}

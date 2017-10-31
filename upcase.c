/*
 * Upcase
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *str;
  int strLength, i;
  if (argc >= 2) {
    str = argv[1];
    strLength = strlen(str);

    for (i = 0; i < strLength; i++) {
      if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] + ('A' - 'a');
      }
    }
    printf("%s\n", str);
  }
  return 1;
}

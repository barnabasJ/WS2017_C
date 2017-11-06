/*
 * Delete Characters
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *str, ch;
  int strLength, nReplaced, i;
  nReplaced = 0;
  if (argc >= 3) {
    str = argv[1];
    ch = argv[2][0];
    strLength = strlen(str);

    for (i = 0; i < strLength; i++) {
      if (str[i] == ch) {
        nReplaced++;
      } else {
        str[i - nReplaced] = str[i];
      }
    }
    for (i = strLength - (nReplaced); i < strLength; i++) {
      str[i] = '!';
    }
  }
  printf("%s\n", str);
  return 1;
}

/*
 * Count as
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *str, *result;
  int strLength, halfStrLength, i;
  result = "ist ein Palindrom";
  if (argc >= 2) {
    str = argv[1];
    strLength = strlen(str);
    halfStrLength = strLength / 2;

    for (i = 0; i < halfStrLength; i++) {
      printf("%c, %c\n", str[i], str[strLength - (i + 1)]);
      if (str[i] != str[strLength - (i + 1)]) {
        result = "ist kein Palindrom";
        break;
      }
    }
  }
  printf("%s\n", result);
  return 1;
}

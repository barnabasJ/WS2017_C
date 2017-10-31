/*
 * Count as
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *str;
  int strLength, i, count;
  count = 0;
  if (argc >= 2) {
    str = argv[1];
    strLength = strlen(str);

    for (i = 0; i < strLength; i++) {
      if (str[i] == 'a' || str[i] == 'A')
        count++;
    }
  }
  printf("%d\n", count);
  return 1;
}

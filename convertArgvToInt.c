/*
 * String to Int
 */

#include <stdio.h>
#include "barnabas.h"

int stringToInt(char *);

int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; ++i) {
    int number = stringToInt(argv[i]);
    printf("1. Parameter als Zahl: %d, geteilt durch 2: %d\n", number,
           number / 2);
  }
  return 1;
}

int stringToInt(char *str) {
  int slen;
  int sign = 1;
  int result = 0;
  slen = strlength(str);

  int i = 0;
  if(str[0] == '-') {
    sign = -sign;
    ++i;
  }

  for (; i < slen; i++) {
    result = result * 10 + (str[i] - '0');
  }
  return result * sign;
}

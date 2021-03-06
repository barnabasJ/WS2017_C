/*
 * String to Int
 */

#include <stdio.h>
#include <string.h>

int stringToInt(char *);
int reverseNumber(int);

int main(int argc, char *argv[]) {
  for(int i = 1; i < argc; ++i) {
    printf("1. Parameter als Zahl: %d", stringToInt(argv[i]));
  }
  return 1;
}

int stringToInt(char *str) {
  int strLength;
  int result = 0;
  strLength = (int)strlen(str);

  for (int i = 0; i < strLength; i++) {
    result = result * 10 + (str[i] - '0');
  }
  return result;
}

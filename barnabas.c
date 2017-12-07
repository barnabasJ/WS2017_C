#include "barnabas.h"

int strlength(char *str) {
  int len = 0;
  while(str[len]) len++;
  return len;
}

int ascii2int(char *s) {
  int result = 0;
  int i = 0;
  while (isDigit(s[i])) {
    result *= 10;
    result += digitToInt(s[i]);
    ++i;
  }
  return result;
}

int digitToInt(char c) { return c - '0'; }

int isDigit(char c) { return (c >= '0' && c <= '9') ? 1 : 0; }

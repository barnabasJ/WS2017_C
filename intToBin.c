/*
 * String to Int
 */

#include <stdio.h>
#include <string.h>

int stringToInt(char *str) {
  int strLength, i;
  int result = 0;
  strLength = strlen(str);

  for (i = 0; i < strLength; i++) {
    result = result * 10 + (str[i] - '0');
  }
  return result;
}

void printBins(int num) {}

int main(int argc, char *argv[]) {
  char *str;
  if (argc >= 2) {
    str = argv[1];
    int number = stringToInt(str);
    printBins(number);
  }
  return 0;
}

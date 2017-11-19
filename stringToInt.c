/*
 * String to Int
 */

#include <stdio.h>
#include <string.h>

int stringToInt(char *);
int reverseNumber(int);

int main(int argc, char *argv[]) {
  char *str;
  if (argc >= 2) {
    str = argv[1];
    int number = stringToInt(str);
    printf("%d\n", number);
    printf("%d\n", reverseNumber(number));
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

int reverseNumber(int number) {
  int result = 0;
  while (number > 0) {
    result *= 10;
    result += number % 10;
    number /= 10;
  }
  return result;
}

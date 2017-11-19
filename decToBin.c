/*
 * Decimal to Binary
 */

#include <stdio.h>
#include <string.h>

void decToBin(unsigned int);
int stringToInt(char *);

int main(int argc, char *argv[]) {
  char *str;
  if (argc >= 2) {
    str = argv[1];
    int number = stringToInt(str);
    decToBin((unsigned int) number);
  }
  return 0;
}

void decToBin(unsigned int dec) {
  int bin[64] = {0};
  int i = 0;

  while (dec > 0) {
    bin[i] = dec % 2;
    ++i;
    dec /= 2;
  }
  for (--i; i >= 0; --i) {
    printf("%d", bin[i]);
  }
  printf("\n");
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

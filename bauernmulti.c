/*
 * String to Int
 */

#include <stdio.h>
#include <string.h>

int stringToInt(char *);
int bauernmulti(int, int);

int main(int argc, char *argv[]) {
  char *str1;
  char *str2;
  if (argc >= 3) {
    str1 = argv[1];
    str2 = argv[2];
    printf("%d\n", bauernmulti(stringToInt(str1), stringToInt(str2)));
  }
  return 0;
}

int stringToInt(char *str) {
  int strLength, i;
  int result = 0;
  strLength = (int)strlen(str);

  for (i = 0; i < strLength; i++) {
    result = result * 10 + (str[i] - '0');
  }
  return result;
}

int bauernmulti(int factor1, int factor2) {
  int product = 0;
  while (factor1 > 0) {
    if (factor1 % 2 == 1)
      product += factor2;
    factor1 /= 2;
    factor2 *= 2;
  }
  return product;
}

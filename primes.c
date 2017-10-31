
/*
 * primes
 */

#include <stdio.h>
#include <stdlib.h>


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

int listPrimes(int upperBound) {
  int primes[upperBound];
  int i, j;
  for (i = 0; i < upperBound; i++) {
    primes[i] = 1;
  }
  primes[0] = 0;
  primes[1] = 0;
  i = 2;
  while (i < upperBound) {
    if (primes[i]) {
      /*printf("%d\n", i);*/
      j = 2;
      while ((i * j)  < upperBound) {
        /*printf("%d\n", j * i);*/
        primes[i * j] = 0;
        j++;
      }
    }
    i++;
  }
  for (i = 0; i < upperBound; i++) {
    if (primes[i]) {
      printf("%d\n", i);
    }
  }

  return 1;
}

int main(int argc, char *argv[]) {
  char *str;
  if (argc >= 2) {
    str = argv[1];
    int number = stringToInt(str);
    listPrimes(number);
  }
  return 1;
}


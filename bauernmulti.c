/*
 * Bauernmultiplikation
 * Barnabas Jovanovics
 */
#include <stdio.h>

#define TESTS 6

int bauernmulti(unsigned int, int);

int main() {
  int values[TESTS] = {3, 54, 11, 45, 100, 33};
  for (int i = 0; i < (TESTS - 1); i += 2) {
    printf("%d * %d = %d\n", values[i], values[i + 1],
           bauernmulti(values[i], values[i + 1]));
  }
  return 0;
}

int bauernmulti(unsigned int factor1, int factor2) {
  int product = 0;
  while (factor1 > 0) {
    if (factor1 % 2 == 1) {
      product += factor2;
    }
    factor1 /= 2;
    factor2 *= 2;
  }
  return product;
}

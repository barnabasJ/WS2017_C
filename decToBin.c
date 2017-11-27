/*
 * Decimal to Binary
 * Barnabas Jovanovics
 */

#include <stdio.h>

#define TESTS 6

void decToBin(int);

int main() {
  int decimals[TESTS] = { 3, 15, 16, 66, 1024, 4096};

  for(int i = 0; i < TESTS; i++) {
    printf("%d in dezimal ist in Binaer: ", decimals[i]);
    decToBin(decimals[i]);
  }

  return 0;
}

void decToBin(int dec) {
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

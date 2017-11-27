/*
 * Quadratzahl Tabelle
 * Barnabas Jovanovics
 */
#include <stdio.h>

int main() {
  printf("n   |   n^2  \n-------------\n");
  int i = 1;
  while (i <= 25) {
    printf("%-2d  |   %d   \n", i , i*i);
    i += 1;
  }
  return 0;
}

#include <stdio.h>

int power(int base, int exponent);

int main(int argc, char *argv[]) {
  int a = 5;
  int result = 0;
  result = power(a, 3);
  printf("%d", result);
  return 0;
}

int power(int base, int exponent) {
  int result = 1;
  for (int i = exponent; i > 0; --i) {
    result *= base;
  }
  return result;
}

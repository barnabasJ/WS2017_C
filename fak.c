#include <stdio.h>

int fak(int n) {
  if (n <= 1) {
    return (1);
  }
  return n * fak(n - 1);
}

int main() {
  int m = 8;
  int faktorial = fak(m);
  printf("Faktioral of %d = %d\n", m, faktorial);
  return 0;
}

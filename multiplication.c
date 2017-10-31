#include <stdio.h>

int main(void) {
  int n = 5, m = 4, result = 0, i;

  for (i = n; i > 0; i--) {
    result = result + m;
    printf("%d", result);
  }
  return 1;
}

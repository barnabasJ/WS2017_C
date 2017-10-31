#include <stdio.h>
int main() {
  int i, j;
  int size = 8;
  for (i = 0; i < size; i++) {
    printf("|");
    for (j = 0; j < size; j++)
      if ((i + j) % 2 == 0)
        printf("#");
      else
        printf(" ");
    printf("|\n");
  }
}

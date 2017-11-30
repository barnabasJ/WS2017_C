
/*
 * Bauernmultiplikation
 * Barnabas Jovanovics
 */
#include <stdio.h>

#define ROWS 3
#define COLS 2

int main() {
  int row = 0;
  int col = 0;
  int matrix[ROWS][COLS] = {{1, 2}, {3, 4}, {5, 6}};
  for (int i = 0; i < (ROWS * COLS); ++i) {
    row = i / COLS;
    col = i % COLS;
    printf("%d ", matrix[row][col]);
  }
  return 0;
}

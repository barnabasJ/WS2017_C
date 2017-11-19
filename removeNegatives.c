/*
 * removeNegatives
 */

#include <stdio.h>
#include <string.h>

int stringToInt(char *);

int main(int argc, char *argv[]) {
  int values[5] = {-1, -5, 6, -4, 8};
  int i;
  int validValues = 0;

  for (i = 0; i < 5; i++) {
    if (values[i] > 0) {
      values[validValues] = values[i];
      validValues++;
    }
  }
  for (i = 0; i < validValues; i++) {
    printf("%d\n", values[i]);
  }
  printf("validValues: %d\n", validValues);
}

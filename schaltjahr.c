/*
 * Schaltjahr
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *endptr, *str;
  str = argv[1];

  long int zahl = strtol(str, &endptr, 10);
  if (((zahl % 4 == 0) && (zahl % 100 != 0)) || (zahl % 400 == 0)) {
    printf("Ist ein Schaltjahr");
  } else {
    printf("Ist kein Schaltjahr");
  }
  return 1;
}

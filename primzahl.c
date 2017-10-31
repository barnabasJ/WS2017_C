/*
 * primzahl.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *endptr, *str;
  str = argv[1];

  long int zahl = strtol(str, &endptr, 10);
  int teiler = 3;

  str = "is not a prime";

  if ((zahl == 2) || (zahl == 3)) {
    str = "is a prime";
  } else {
    if ((zahl % 2) == 0) {
      str = "is not a prime";
    } else {
      while (((teiler * teiler) <= zahl) && ((zahl % teiler) != 0)) {
        teiler = teiler + 2;
      }
      if ((zahl % teiler) != 0)
        str = "is a prime";
    }
  }
  printf("%s, %d\n", str, teiler);
  return 1;
}

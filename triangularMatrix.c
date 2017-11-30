#include "barnabas.h"
#include <stdio.h>

void printTrinagularMatrixFor(int n);
void printTrinagularMatrixWhile(int n);
void printTrinagularMatrixDoWhile(int n);

int printRow(int startNumber, int endNumber, int rowLength);

int main(int argc, char *argv[]) {
  if (argc > 1) {
    int n = ascii2int(argv[1]);
    printf("For\n\n");
    printTrinagularMatrixFor(n);
    printf("\nWhile\n\n");
    printTrinagularMatrixWhile(n);
    printf("\nDo While\n\n");
    printTrinagularMatrixDoWhile(n);
  }
  return 0;
}

void printTrinagularMatrixFor(int n) {
  int allowedNumbersOnCurrentLine = 1;
  for (int i = 1; i < n; i += 2) {
    i = printRow(i, n, allowedNumbersOnCurrentLine) - 2;
    ++allowedNumbersOnCurrentLine;
  }
}

void printTrinagularMatrixWhile(int n) {
  int allowedNumbersOnCurrentLine = 1;
  int i = 1;
  while (i < n) {
    i = printRow(i, n, allowedNumbersOnCurrentLine);
    ++allowedNumbersOnCurrentLine;
  }
}

void printTrinagularMatrixDoWhile(int n) {
  int allowedNumbersOnCurrentLine = 1;
  int i = 1;
  do {
    i = printRow(i, n, allowedNumbersOnCurrentLine);
    ++allowedNumbersOnCurrentLine;
  } while (i < n);
}

int printRow(int startNumber, int endNumber, int numberCount) {
  for (int printedNumbers = 0;
       printedNumbers < numberCount && startNumber < endNumber;
       ++printedNumbers) {
    printf("%d\t", startNumber);
    startNumber += 2;
  }
  printf("\n");
  return startNumber;
}

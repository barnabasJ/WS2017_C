/*
 * Dreiecksmatrix
 *
 * Barnabas Jovanovics
 *
 * Ich speichere mir zuerst weg das in der ersten Zeile nur 1e Nummer stehen
 * darf.
 * Diese Zahl wird dann in jedem Durchgang des Loops erhoeht. Davor wird im Loop
 * die Funktion printRow aufgerufen. Diese gibt die Zahlen von start bis ende
 * oder bis
 * die rowLength erreicht wird aus und gibt die zuletzt ausgegeben Zahl zurueck.
 *
 */
#include "barnabas.h"
#include <stdio.h>

void printTriangularMatrixFor(int n);
void printTriangularMatrixWhile(int n);
void printTriangularMatrixDoWhile(int n);

int main(int argc, char *argv[]) {
  if (argc > 1) {
    int n = ascii2int(argv[1]);
    printf("For\n\n");
    printTriangularMatrixFor(n);
    printf("\nWhile\n\n");
    printTriangularMatrixWhile(n);
    printf("\nDo While\n\n");
    printTriangularMatrixDoWhile(n);
  }
  return 0;
}

void printTriangularMatrixFor(int n) {
  int allowedNumbersOnCurrentLine = 1;
  int printedNumbers = 0;
  for (int i = 1; i < n; i += 2) {
    printf("%d", i);
    ++printedNumbers;
    if (printedNumbers == allowedNumbersOnCurrentLine) {
      printf("\n");
      ++allowedNumbersOnCurrentLine;
      printedNumbers = 0;
    } else {
      printf("\t");
    }
  }
}

void printTriangularMatrixWhile(int n) {
  int allowedNumbersOnCurrentLine = 1;
  int printedNumbers = 0;
  int i = 1;
  while (i < n) {
    printf("%d", i);
    ++printedNumbers;
    if (printedNumbers == allowedNumbersOnCurrentLine) {
      printf("\n");
      ++allowedNumbersOnCurrentLine;
      printedNumbers = 0;
    } else {
      printf("\t");
    }
    i += 2;
  }
}

void printTriangularMatrixDoWhile(int n) {
  int allowedNumbersOnCurrentLine = 1;
  int printedNumbers = 0;
  int i = 0;
  do {
    if (i % 2) {
      printf("%d", i);
      ++printedNumbers;
      if (printedNumbers == allowedNumbersOnCurrentLine) {
        printf("\n");
        ++allowedNumbersOnCurrentLine;
        printedNumbers = 0;
      } else {
        printf("\t");
      }
    }
    ++i;
  } while (i < n);
}

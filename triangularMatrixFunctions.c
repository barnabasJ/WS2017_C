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
int printRow(int startNumber, int endNumber, int rowLength);
int printTabedNumbers(int start, int end, int step);

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
  for (int i = 1; i < n; i += 2) {
    i = printRow(i, n, allowedNumbersOnCurrentLine);
    ++allowedNumbersOnCurrentLine;
  }
}

void printTriangularMatrixWhile(int n) {
  int allowedNumbersOnCurrentLine = 1;
  int i = 1;
  while (i < n) {
    i = printRow(i, n, allowedNumbersOnCurrentLine) + 2;
    ++allowedNumbersOnCurrentLine;
  }
}

void printTriangularMatrixDoWhile(int n) {
  int allowedNumbersOnCurrentLine = 1;
  int i = 1;
  do {
    i = printRow(i, n, allowedNumbersOnCurrentLine) + 2;
    ++allowedNumbersOnCurrentLine;
  } while (i < n);
}

/*
 * printRow
 * start...       erste Zahl die ausgegeben werden soll
 * end...         maximale Zahl bis zu der ausgegeben werden soll (exklusive)
 * rowLength...   anzahl der nummern die ausgegeben werden sollen
 *
 * return...      letzte Ausgegebene Zahl
 */
int printRow(int start, int end, int rowLength) {
  int lastPrintedNumber;
  int currentLineMaximum =
      rowLength * 2 + start > end ? end : rowLength * 2 + start;
  lastPrintedNumber = printTabedNumbers(start, currentLineMaximum, 2);
  printf("\n");
  return lastPrintedNumber;
}

/*
 * printTabedNumbers
 * start...             erste Zahl die ausgegeben werden soll
 * end...               maximale Zahl bis zu der ausgegeben werden soll (exklusive)
 * maxCountNumbers...   anzahl der nummern die ausgegeben werden sollen
 * step...              abstand zwischen den ausgegbenen Zahlen
 *
 * return...            letzte Ausgegebene Zahl
 */
int printTabedNumbers(int start, int end, int step) {
  for (int printedNumbers = 0; start < end; ++printedNumbers) {
    printf("%d\t", start);
    start += step;
  }
  return start - step;
}

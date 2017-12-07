/*
 * Arithmetische Mittel + Ausreisser
 *
 * Barnabas Jovanovics
 *
 * Ich speichere erst den ersten Wert des Arrays als Startwert
 * fuer Maximum, Minimum und Durchschnitt ab. Anschliessend gehe ich
 * das Array durch und zaehle alle Werte zum Durchschnitt dazu. Ich vergleiche
 * auch immer ob das aktuelle groesser ist als der aktuelle Wert ist das der
 * Fall tausche ich die Werte aus. Das selbe mach ich mit dem Maximum in die
 * andere Richtung.
 */

#include <stdio.h>

int minMaxMean(int valuesLen, int values[], int *pmin, int *pmax, float *pmean);

int main() {
  int values[] = {1,2,3,0,5,-4};
  //int values[] = {3, 5, 7, 8, 1, -1, 4, 0};
  int valuesLen = 6;
  //int valuesLen = 7;
  int min;
  int max;
  float mean;

  minMaxMean(valuesLen, values, &min, &max, &mean);

  printf("Minimum: %d\tMaximum: %d\tMittel: %.2f", min, max, (double)mean);

  return 0;
}

int minMaxMean(int valuesLen, int values[], int *pmin, int *pmax, float *pmean) {
  int minimum = values[0];
  int maximum = values[0];
  int sum = values[0];
  for (int i = 1; i < valuesLen; ++i) {
    sum += values[i];
    minimum = minimum > values[i] ? values[i] : minimum;
    maximum = maximum < values[i] ? values[i] : maximum;
  }
  (*pmean) = (float)sum / valuesLen;
  (*pmin) = minimum;
  (*pmax) = maximum;

  return 0;
}

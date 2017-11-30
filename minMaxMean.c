/*
 * Arithmetische Mittel + Ausreisser
 *
 * Barnabas Jovanovics
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  //int values[] = {1,2,3,0,5,-6};
  int values[] = {3,5,7,8,1,-1,4,0};
  //int valuesLen = 6;
  int valuesLen = 7;
  int min = values[0];
  int max = values[0];
  float mean = values[0];

  for(int i = 1; i < valuesLen; ++i){
     mean += values[i];
     min = min > values[i] ? values[i] : min;
     max = max < values[i] ? values[i] : max;
  }
  mean /= valuesLen;

  printf("Minimum: %d\tMaximum: %d\tMittel: %.2f", min, max, mean);

  return 0;
}



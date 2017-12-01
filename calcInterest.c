/*
 * Zinsrechnung
 *
 * Barnabas Jovanovics
 *
 * Ich habe eine Schleife die beim ersten Jahr anfaengt und bis zum
 * letzten Jahr (inkludiert) jedes Jahr den Zinsatz dazurechnet und ausgibt
 *
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int interest = 5;
  float finterest = interest / 100.0 + 1;
  int basicCapital = 1000;
  float capital = (float) basicCapital;
  int duration = 10;

  printf("Jahr\tKapital\n-------------------------------------------\n");

  for(int i = 1; i <= duration; ++i){
    capital *= finterest;
    printf("%d\t%.2f EUR\n", i,  capital);
  }
  return 0;
}


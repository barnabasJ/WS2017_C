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

void printInterest(int interestRate, float capital, int duration);

int main() {
  //int interestRate = 5;
  int interestRate = 8;
  //int basicCapital = 1000;
  int basicCapital = 4500;
  //int duration = 10;
  int duration = 20;

  printInterest(interestRate, (float) basicCapital, duration);

  return 0;
}

void printInterest(int interestRate, float capital, int duration) {
  float finterestRate = (float)(interestRate / 100.0 + 1);

  printf("Kapitalentwicklung für Grundkapital: %d EUR\n", (int) capital);
  printf("Fixzinssatz: %d%%, Laufzeit %d Jahre\n\n", interestRate, duration);

  printf("Jahr\tKapital\n-------------------------------------------\n");

  for(int i = 1; i <= duration; ++i){
    capital *= finterestRate;
    printf("%3d\t%10.2f EUR\n", i,  (double)capital);
  }


}

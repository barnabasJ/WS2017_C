/*
 * Ascii to Int
 *
 * Barnabas Jovanovics
 *
 * Den String von vorne her anschauen und kontrollieren ob an der aktuellen
 * Stelle eine Ziffer steht, ist das der Fall wird die akutelle Zahl erst um eine 10ner Stelle verschoben
 * und anschliessend wird die Ziffer in einen Integer umgewandelt und zur gespeicherten Zahl dazu addiert.
 * Ist die aktuelle Stelle am String keine Ziffer wird die bisher gespeichert Zahl zurueck.
 *
 */
#include <stdio.h>

int ascii2int(char *s);
int digitToInt(char c);
int isDigit(char c);

int main(int argc, char *argv[]) {
  for(int i = 1; i < argc; ++i){
    printf("%d\n", ascii2int(argv[i]));
  }
  return 0;
}

int ascii2int(char *s) {
  int result = 0;
  int i = 0;
  while (isDigit(s[i])) {
    result *= 10;
    result += digitToInt(s[i]);
    ++i;
  }
  return result;
}

int digitToInt(char c) { return c - '0'; }

int isDigit(char c) { return (c >= '0' && c <= '9') ? 1 : 0; }

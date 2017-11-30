#include <stdio.h>

int strlen(char s[]);
float calcConsumption(float litres, float km);
int ggT(int value1, int value2);

int main(int argc, char *argv[]) {
  char strings[][64] = {"Barnabas", "Pia-Maria", "Birgit", "Patrick", "Woflgang"};
  int i;
  for(i = 0; i < 5; ++i){
    printf("%s hat %d Buchstaben\n", strings[i], strlen(strings[i]));
  }

  return 0;
}

int strlen(char s[]) {
  int i;
  for (i = 0; s[i]; ++i)
    ;
  return i;
}

float calcConsumption(float litres, float km) { return litres / km * 100; }

int ggT(int value1, int value2) {
  int result = -1;
  int temp;
  if (value1 > 0 && value2 > 0) {
    if (value1 < value2) {
      temp = value1;
      value1 = value2;
      value2 = temp;
    }

    while (value2 != 0) {
      temp = value2;
      value2 = value1 % value2;
      value1 = temp;
    }
    result = value1;
  }
  return result;
}

#include <stdio.h>
#include <string.h>

float calculateFromString(char[]);

int main(int argc, char *argv[]) {
  char tests[4][64] = {"calc 11 + 22", "calc 2 / 4 x 5 - 5", "clac 3 - 2",
                       "calc 5 x 4 - 10 / 5"};

  for (int i = 0; i < 4; ++i) {
    printf("%.3f\n", (double)calculateFromString(tests[i]));
  }
  return 1;
}
float calculateFromString(char arithmeticExpression[]) {
  int i = 5;
  int j = 0;
  char operator= '\0';
  double numbers[2] = {0, 0};
  while (arithmeticExpression[i]) {
    if (arithmeticExpression[i] >= '0' && arithmeticExpression[i] <= '9') {
      while (arithmeticExpression[i] != ' ' &&
             arithmeticExpression[i] != '\0') {
        numbers[j] = numbers[j] * 10;
        numbers[j] = numbers[j] + (arithmeticExpression[i] - '0');
        i = i + 1;
      }
      j = 1;
    } else if (arithmeticExpression[i] != ' ') {
      operator= arithmeticExpression[i];
    }

    if (numbers[1] > 0) {
      if (operator== '+') {
        numbers[0] = numbers[0] + numbers[1];
      } else if (operator== '-') {
        numbers[0] = numbers[0] - numbers[1];
      } else if (operator== 'x') {
        numbers[0] = numbers[0] * numbers[1];
      } else if (operator== '/') {
        numbers[0] = numbers[0] / numbers[1];
      }
      numbers[1] = 0;
    }
    i = i + 1;
  }

  return (double)(int)((numbers[0] + 0.005) * 100) / 100.0;
}

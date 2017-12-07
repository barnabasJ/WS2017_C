#include "barnabas.h"
#include <stdio.h>
#include <string.h>

#define NR_OF_TESTS 6

int readNumber(char *s, int *index);
char readOperator(char *s, int *index, int *endOfCalculation);
int isOperator(char c);
double calculate(double number1, double number2, char operator);
float calculateFromString(char[]);

int main() {
  char tests[NR_OF_TESTS][64] = {
      "11 + 22 x 0 =",    "2 / 4 x 5 - 5 =",    "3 - 2 =",
      "5 x 4 - 10 / 5 =", "14 x 3 + 375 / 4 =", "4 ="};

  for (int i = 0; i < NR_OF_TESTS; ++i) {
    printf("%s %.3f\n", tests[i], (double)calculateFromString(tests[i]));
  }
  return 1;
}
float calculateFromString(char arithmeticExpression[]) {
  int i = 0;
  int j = 0;
  int operands = 0;
  char operator= '\0';
  double numbers[2] = {0, 0};
  int endOfCalculation = 0;
  while (!endOfCalculation) {
    if (isDigit(arithmeticExpression[i])) {
      numbers[j] = readNumber(arithmeticExpression, &i);
      j = 1;
      ++operands;
    } else if (arithmeticExpression[i] == ' ') {
      operator= readOperator(arithmeticExpression, &i, &endOfCalculation);
    }

    if (operands > 1) {
      numbers[0] = calculate(numbers[0], numbers[1], operator);
      numbers[1] = 0;
      --operands;
    }
  }

  return (double)(int)((numbers[0] + 0.005) * 100) / 100.0;
}

int readNumber(char *s, int *index) {
  int result = 0;
  while (isDigit(s[(*index)])) {
    result *= 10;
    result += digitToInt(s[(*index)]);
    ++(*index);
  }
  return result;
}

char readOperator(char *s, int *index, int *endOfCalculation) {
  char operator= '!';
  while (!isDigit(s[(*index)]) && s[(*index)]) {
    if (isOperator(s[(*index)])) {
      operator= s[(*index)];
    } else if (s[(*index)] == '=') {
      (*endOfCalculation) = 1;
    }
    ++(*index);
  }
  return operator;
}

int isOperator(char c) {
  switch (c) {
  case '+':
  case '-':
  case 'x':
  case '/':
    return 1;
  default:
    return 0;
  }
}

double calculate(double number1, double number2, char operator) {
  double result = 0;
  switch (operator) {
  case '+':
    result = number1 + number2;
    break;
  case '-':
    result = number1 - number2;
    break;
  case 'x':
    result = number1 * number2;
    break;
  case '/':
    result = number1 / number2;
    break;
  default:
    printf("Wrong operator! %c\n", operator);
  }
  return result;
}

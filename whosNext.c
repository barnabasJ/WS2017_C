

/*
 * String to Int
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int stringToInt(char *);

int stringToInt(char *str) {
  int strLength, i;
  int result = 0;
  strLength = (int)strlen(str);

  for (i = 0; i < strLength; i++) {
    result = result * 10 + (str[i] - '0');
  }
  return result;
}

int main(int argc, char *argv[]) {
  char *str;
  if (argc >= 2) {
    str = argv[1];
    int studentsCount = stringToInt(str);
    srand((unsigned int)time(NULL));
    printf("Student %d is next!!!\n", (rand() % studentsCount) + 1);
  }
  return 1;
}

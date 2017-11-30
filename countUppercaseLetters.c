#include <stdio.h>
#include "barnabas.h"

int isPalindrome(char *);

int main(int argc, char *argv[]) {
  if (argc > 2) {
    char *str = argv[1];
    int letterCount = 0;
    int i = 0;
    while (str[i]) {
      if (str[i] >= 'A' && str[i] <= 'Z') {
        ++letterCount;
      }
      ++i;
    }
    printf("%d\n", letterCount);
    printf("%s ist ein Palindrom? %d\n", argv[2], isPalindrome(argv[2]));
  }
  return 0;
}

int isPalindrome(char *str) {
  int len = strlength(str);
  int result = 1;
  for(int i = 0; i < len / 2 && result; ++i) {
    if(str[i] != str[len - i - 1]) {
      result = 0;
    }
  }
  return result;
}


/*
 * count Vocals
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *str;
  int strLength, i;
  int vocals[5] = {0};
  if (argc >= 2) {
    str = argv[1];
    strLength = strlen(str);

    for (i = 0; i < strLength; i++) {
      switch (str[i]) {
      case 'a':
        vocals[0]++;
        break;
      case 'e':
        vocals[1]++;
        break;
      case 'i':
        vocals[2]++;
        break;
      case 'o':
        vocals[3]++;
        break;
      case 'u':
        vocals[4]++;
        break;
      }
    }
    for (i = 0; i < 5; i++) {
      printf("%d\n", vocals[i]);
    }

    return 1;
  }
}


/*
 * Nimm Spiel
 */

#include <stdio.h>

int main() {
  int coins[3] = {3, 4, 5};
  int player = 1;
  int playing = 1;
  int i, j;
  int row, ncoins, isRowValid, isNrCoinsValid;
  char tmpChar;
  int charCount;
  while (playing == 1) {
    isRowValid = 0;
    isNrCoinsValid = 0;
    /* Display state of the game */
    for (i = 0; i < 3; i++) {
      for (j = 0; j < coins[i]; j++) {
        printf("#");
      }
      printf("\n");
    }
    /* get User Input */
    while (isRowValid == 0) {
      printf("Player %d: please select a row: ", player);
      charCount = 0;
      while ((tmpChar = getchar()) != '\n') {
        row = tmpChar - '0';
        charCount++;
      }
      if (row >= 1 && row <= 3 && charCount == 1) {
        if (coins[3 - row] != 0) {
          isRowValid = 1;
          while (isNrCoinsValid == 0) {
            printf("Player %d: please select number of coins: ", player);
            charCount = 0;
            while ((tmpChar = getchar()) != '\n') {
              ncoins = tmpChar - '0';
              charCount++;
            }
            if (ncoins <= coins[3 - row] && ncoins > 0 && charCount == 1) {
              isNrCoinsValid = 1;
              coins[3 - row] = coins[3 - row] - ncoins;
            }
          }
        }
      }
    }
    /* Check if game is over */
    if (coins[0] == 0 && coins[1] == 0 && coins[2] == 0) {
      playing = 0;
    } else {
      player = player + 1;
      if (player > 2) {
        player = 1;
      }
    }
  }
  printf("Player %d won!!\n", player);
  return 1;
}

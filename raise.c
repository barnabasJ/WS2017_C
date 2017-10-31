#include<stdio.h>
int main(){
  int n = 5;
  int exponent = 3;
  int result = 1;
  int i;

  for (i = 0; i < exponent; i++)
    result = result * n;
  printf("%d\n", result);
  return 0;
}

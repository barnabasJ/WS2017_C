#include <stdio.h>
#define NR_OF_TESTS 6

double eZ(double z, int n);

int main(int argc, char *argv[]) {
  double zs[NR_OF_TESTS] = {0.00, -1.00, 1.00, 10, -10, 5};
  int ns[NR_OF_TESTS] = {0, -1, 2, 5, 8, 11};
  for(int i = 0; i < NR_OF_TESTS; ++i) {
    printf("z: %.2f, n: %d, e^z: %f\n", zs[i], ns[i], eZ(zs[i], ns[i]));
  }
  return 0;
}

double eZ(double z, int n) {
  double result = 1;
  double zPow = z;
  long fak = 1;
  if (n >= 1) {
  for (int i = 1; i < n; ++i) {
      //printf("result: %10.2f\tzPow: %10.2f\tfac: %10ld\n", result, zPow, fak);
      result += (zPow / fak);
      zPow *= z;
      fak *= (i + 1);
    }
    return result;
  } else {
    return -1;
  }
}

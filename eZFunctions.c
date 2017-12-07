#include <stdio.h>
#define NR_OF_TESTS 6

double eZ(double z, int n);
double calcPow(double e, int z);
long factorial(long fac);

int main(int argc, char *argv[]) {
  double zs[NR_OF_TESTS] = {0.00, -1.00, 1.00, 10, -10, 5};
  int ns[NR_OF_TESTS] = {0, -1, 2, 5, 8, 11};
  for (int i = 0; i < NR_OF_TESTS; ++i) {
    printf("z: %.2f, n: %d, e^z: %f\n", zs[i], ns[i], eZ(zs[i], ns[i]));
  }
  return 0;
}

double eZ(double z, int n) {
  double result = 0;
  if (n >= 0) {
    for (int i = 0; i < n; ++i) {
      //printf("result: %10.2f\tzPow: %10.2f\tfac: %10ld\n", result, calcPow(z, i), factorial(i));
      result += calcPow(z, i) / factorial(i);
    }
    return result;
  } else {
    return -1;
  }
}

long factorial(long fac) {
  if (fac == 0 || fac == 1) {
    return 1;
  } else {
    return fac * factorial(fac - 1);
  }
}

double calcPow(double e, int z) {
  if (z <= 0) {
    return 1;
  } else {
    return e * calcPow(e, z - 1);
  }
}

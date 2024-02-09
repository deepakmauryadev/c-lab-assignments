// Sum of series of n^3

#include "math.h"
#include "stdio.h"

float power(float a, unsigned int b);

int main() {
  unsigned int n;
  printf("n = ");
  scanf("%d", &n);

  float sum = 0.0;

  for (int i = 1; i <= n; i++) {
    sum += power(i, 3);
  }

  printf("Sum of series of n/n+1 upto %d is %lf", n, sum);

  return 0;
}

float power(float a, unsigned int b) {
  int p = 1;

  for (int i = 1; i <= b; i++) {
    p *= a;
  }

  return p;
}

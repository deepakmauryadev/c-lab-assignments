// Sum of series of 1/n^2

#include "math.h"
#include "stdio.h"

float power(float a, unsigned int b);

int main() {
  unsigned int n;
  printf("n = ");
  scanf("%d", &n);

  float sum = 0.0;

  for (int i = 1; i <= n; i++) {
    sum += (1 / power((float)i, 2));
  }

  printf("Sum of series of 1/n^2 upto %d is %lf", n, sum);

  return 0;
}

float power(float a, unsigned int b) {
  int p = 1;

  for (int i = 1; i <= b; i++) {
    p *= a;
  }

  return p;
}

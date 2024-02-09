// Sum of series of 1/n^2

#include "math.h"
#include "stdio.h"

int main() {
  unsigned int n;
  printf("n = ");
  scanf("%d", &n);

  float sum = 0.0;

  for (int i = 1; i <= n; i++) {
    sum += (1 / pow((float)i, 2.0));
  }

  printf("Sum of series of 1/n^2 upto %d is %lf", n, sum);

  return 0;
}
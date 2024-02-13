// Sum of series of n^3

#include "math.h"
#include "stdio.h"

int main() {
  unsigned int n;
  printf("n = ");
  scanf("%d", &n);

  float sum = 0.0;

  for (int i = 1; i <= n; i++) {
    sum += pow(i, 3);
  }

  printf("Sum of series of n^3 upto %d is %f", n, sum);

  return 0;
}
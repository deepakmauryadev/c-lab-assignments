// Sum of series of 1/n

#include "stdio.h"

int main() {
  unsigned int n;
  printf("n = ");
  scanf("%d", &n);

  float sum = 0.0;

  for (int i = 1; i <= n; i++) {
    sum += (1 / (float)i);
  }

  printf("Sum of series of 1/n upto %d is %f", n, sum);

  return 0;
}
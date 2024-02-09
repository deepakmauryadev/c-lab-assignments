// Sum of series of n/n+1

#include "stdio.h"

int main() {
  unsigned int n;
  printf("n = ");
  scanf("%d", &n);

  float sum = 0.0;

  for (int i = 1; i <= n; i++) {
    sum += (i / (float)(i + 1));
  }

  printf("Sum of series of n/n+1 upto %d is %lf", n, sum);

  return 0;
}
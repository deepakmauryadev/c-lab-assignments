// Sum of series of 1 + (1+2) + (1+2+3) + ... + (1+2+...+n)

#include "stdio.h"

int main() {
  unsigned int n;
  printf("n = ");
  scanf("%d", &n);

  int sum = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      sum += j;
    }
  }

  printf("Sum of this series upto %d is %d", n, sum);

  return 0;
}

#include "stdio.h"

int main() {
  int i = 1;
  int sum = 0;

  int n;

  printf("Enter the number: ");
  scanf("%d", &n);

  while (i <= n) {
    sum += i++;
  }

  printf("The sum of 1 to %d is %d\n", n, sum);

  return 0;
}

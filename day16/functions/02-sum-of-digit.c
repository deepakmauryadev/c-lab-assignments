// sum of digits of number

#include "stdio.h"

int sumOfDigit(int x);

int main() {
  int n;
  printf("Enter number: ");
  scanf("%d", &n);

  int sum = sumOfDigit(n);
  printf("The sum of digits of %d is %d\n", n, sum);

  return 0;
}

int sumOfDigit(int x) {
  if (x < 9)
    return x;
  else
    return (x % 10) + sumOfDigit(x / 10);
}
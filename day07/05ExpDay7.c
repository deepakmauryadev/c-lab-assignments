// Ques: WAP to find out sum of digits of a number.

#include "stdio.h"

int sumOfDigit(int n);

int main() {
  int n;
  printf("n = ");
  scanf("%d", &n);

  int sum = sumOfDigit(n);
  printf("The sum of digits of %d is %d", n, sum);

  return 0;
}

int sumOfDigit(int n) {
  return n < 10 ? n : (n % 10) + sumOfDigit((int)(n / 10));
}
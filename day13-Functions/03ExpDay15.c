#include "stdio.h"

int fib(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

int main() {
  int n;
  printf("Enter fibonacci term serial number: ");
  scanf("%d", &n);

  int fn = fib(n);
  printf("Fibonacci of %d term is %d\n", n, fn);

  return 0;
}
#include "stdio.h"

int fib(int x);

int main() {
  int n;
  printf("Enter the number of elements to be printed: ");
  scanf("%d", &n);

  printf("Fibonacci series till %d is: ", n);
  for (int i = 0; i < n; i++) {
    printf("%d ", fib(i));
  }
  printf("\n");

  return 0;
}

int fib(int x) {
  if (x <= 1)
    return x;
  else
    return fib(x - 1) + fib(x - 2);
}
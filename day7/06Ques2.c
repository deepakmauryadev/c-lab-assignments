#include <stdio.h>

int factorial(unsigned int n) {
  if (n == 1) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}

int main() {
  unsigned int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  int f = factorial(n);

  printf("The factorial of %d is %d\n", n, f);

  return 0;
}

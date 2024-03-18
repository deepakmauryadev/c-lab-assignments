#include "stdio.h"

int prime(int n) {
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int a;
  printf("Enter the number: ");
  scanf("%d", &a);

  int p = prime(a);

  if (p == 1) {
    printf("%d is prime\n", a);
  } else {
    printf("%d is not prime\n", a);
  }

  return 0;
}
// Ques: WAP to print the natural numbers from n to 1(value of n is user input).

#include "stdio.h"

int main() {
  int n;

  printf("n = ");
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
    printf("%d ", i);
  }

  return 0;
}
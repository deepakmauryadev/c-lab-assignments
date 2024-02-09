// Ques: WAP to print the natural numbers from 1 to n (value of n is user
// input).

#include "stdio.h"

int main() {
  int n;

  printf("n = ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
  }

  return 0;
}
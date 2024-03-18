#include "stdio.h"

int add(int a, int b);

int main() {
  int x, y;
  printf("Enter two numbers: ");
  scanf("%d %d", &x, &y);

  int sum = add(x, y);
  printf("The sum is %d\n", sum);

  return 0;
}

int add(int a, int b) { return a + b; }
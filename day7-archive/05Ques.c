#include <stdio.h>

int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  int i = n;
  int sum = 0;

  while (i != 0) {
    sum += i % 10;
    i /= 10;
  }

  printf("The sum is %d\n", sum);

  return 0;
}

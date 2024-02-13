// Array

#include "stdio.h"

int main() {
  unsigned int n;

  printf("Enter the size of array (n): ");
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++) {
    printf("%d: ", i);
    scanf("%d", &a[i]);
  }
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  printf("The sum of the elements are: %d\n", sum);

  return 0;
}
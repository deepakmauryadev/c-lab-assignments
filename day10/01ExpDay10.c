// sum of n elements

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

  printf("The elements are: ");

  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  printf("\n");

  return 0;
}
// average of n elements

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

  printf("The average of the elements are: %f\n", (sum / (float)n));

  return 0;
}
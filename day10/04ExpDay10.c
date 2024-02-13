// max amongs elements in array

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

  int max = a[0];

  for (int i = 0; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }

  printf("The max in the array is: %d\n", max);

  return 0;
}
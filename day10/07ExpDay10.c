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

  int smallest = __INT_MAX__, second_smallest = __INT_MAX__;

  for (int i = 0; i < n; i++) {
    if (a[i] < smallest) {
      second_smallest = smallest;
      smallest = a[i];
    } else if (a[i] > smallest && a[i] < second_smallest) {
      second_smallest = a[i];
    }
  }

  printf("The smallest elements is %d and second smallest is %d", smallest,
         second_smallest);

  return 0;
}
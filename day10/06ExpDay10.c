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

  printf("The even elements are: ");

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      printf("%d ", a[i]);
    }
  }

  printf("\n");

  return 0;
}
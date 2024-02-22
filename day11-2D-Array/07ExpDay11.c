// WAP to copy lower diagonal element to new array

#include "stdio.h"

int main() {
  unsigned int n;
  printf("Enter the size of the array (n): ");
  scanf("%d", &n);

  int a[n][n], na[n][n];
  printf("Enter the elements of the array.\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter value for a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);

      if (i >= j) {
        na[i][j] = a[i][j];
      } else {
        na[i][j] = 0;
      }
    }
  }

  printf("\nThe lower diagonal array is\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", na[i][j]);
    }
    printf("\n");
  }

  return 0;
}
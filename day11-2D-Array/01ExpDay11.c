// WAP for a two dimensional to store and display the elements.

#include "stdio.h"

int main() {
  unsigned int n;
  printf("Enter the size of the array (n): ");
  scanf("%d", &n);

  int a[n][n];
  printf("Enter the elements of the array.\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter value for a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  printf("\nThe two dimenstional array is\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
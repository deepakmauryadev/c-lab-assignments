// Sum of diagonals

#include "stdio.h"

int main() {
  unsigned int n;
  printf("Enter the size of the array (n): ");
  scanf("%d", &n);

  int a[n][n], sumOfDiagonals = 0;
  printf("Enter the elements of the array.\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter value for a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        sumOfDiagonals += a[i][j];
      }
    }
  }

  printf("The sum of diagonal elements is %d\n", sumOfDiagonals);

  return 0;
}
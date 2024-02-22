// multiplication of a matrix

#include "stdio.h"

int main() {
  unsigned int n;
  printf("Enter the size of the array (n): ");
  scanf("%d", &n);

  int a[n][n], b[n][n], m[n][n];
  printf("Enter the elements of the array.\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter value for a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter value for b[%d][%d]: ", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  printf("\nValue of matrix A\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  printf("\nValue of matrix B\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      m[i][j] = 0;
      for (int k = 0; k < n; k++) {
        m[i][j] += a[i][k] * b[k][i];
      }
    }
  }

  printf("\nValue of matrix AxB\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}
// WAP to find the sum of two matrices of order 2x2 using multidimensional
// arrays.

#include "stdio.h"

int main() {
  unsigned int n = 2;
  float a[n][n], b[n][n], sum[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter value for a[%d][%d]: ", i, j);
      scanf("%f", &a[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter value for b[%d][%d]: ", i, j);
      scanf("%f", &b[i][j]);
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  printf("The sum of matrix A+B is\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%.2f ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
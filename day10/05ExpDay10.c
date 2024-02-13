#include "stdio.h"

int main() {
  unsigned int n = 5;
  int a[] = {1, 2, 3, 4, 5};
  int copy[n];
  int reversed[n];

  for (int i = 0; i < n; i++) {
    copy[i] = a[i];
  }

  for (int i = 0; i < n; i++) {
    reversed[i] = a[n - 1 - i];
  }

  return 0;
}
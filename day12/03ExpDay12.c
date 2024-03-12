// wap to count the total no of duplicate element in an array

#include "stdio.h"

int main() {
  unsigned int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) count++;
    }
  }

  printf("There are %d duplicate element in the array.\n", count);

  return 0;
}
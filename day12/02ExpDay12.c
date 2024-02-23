// wap to insert an element at a given location

#include "stdio.h"

int main() {
  unsigned int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);

  int a[n];
  int na[n + 1];

  for (int i = 0; i < n; i++) {
    printf("Value for a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  int index, value, flag = 0;
  printf("Enter the index of element: ");
  scanf("%d", &index);
  printf("Enter the value of element: ");
  scanf("%d", &value);

  for (int i = 0; i < n + 1; i++) {
    if (i < index) {
      na[i] = a[i];
    } else if (i == index) {
      na[index] = value;
    } else {
      na[i] = a[i - 1];
    }
  }

  printf("The new array is: ");
  for (int i = 0; i < n + 1; i++) {
    printf("%d ", na[i]);
  }
  printf("\n");

  return 0;
}
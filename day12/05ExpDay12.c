// wap to search an element in an array

#include "stdio.h"

int main() {
  unsigned int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++) {
    printf("Value for a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  int value, index, flag = 0;
  printf("Enter the element to find: ");
  scanf("%d", &value);

  for (int i = 0; i < n; i++) {
    if (a[i] == value) {
      index = i;
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    printf("%d does not found in array.\n", value);
  } else {
    printf("%d found on index %d in array.\n", value, index);
  }

  return 0;
}
// wap to find index of element in the array

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

  int s;
  printf("Enter the element to find index of: ");
  scanf("%d", &s);

  int index, flag = 0;

  for (int i = 0; i < n; i++) {
    if (s == a[i]) {
      index = i;
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    printf("Element %d does not exists in the array.\n", s);
  } else {
    printf("Element %d have index %d in the array.\n", s, index);
  }

  return 0;
}
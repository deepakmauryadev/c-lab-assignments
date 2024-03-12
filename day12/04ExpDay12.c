// wap to find out the product of the numbers stored in an array

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

  int pos1, pos2;
  printf("Enter the index of first element: ");
  scanf("%d", &pos1);
  printf("Enter the value of second element: ");
  scanf("%d", &pos2);

  printf("The product of the elements is %d\n", a[pos1] * a[pos2]);

  return 0;
}
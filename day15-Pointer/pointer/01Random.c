#include "stdio.h"

int main() {
  int x, y;
  int change(int a, int b);

  printf("Enter the values for x and y: ");
  scanf("%d %d", &x, &y);

  change(x, y);

  printf("In main() x=%d, y=%d\n", x, y);

  return 0;
}

int change(int a, int b) {
  int t = a;
  a = b;
  b = t;

  printf("In change() x=%d, y=%d\n", a, b);
}
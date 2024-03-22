#include "stdio.h"

int main() {
  int v = 10;
  int *p = &v;

  printf("Address of v = %p\n", p);
  printf("Value of v = %d\n", *p);
  printf("Address of p = %u\n", &p);

  return 0;
}
#include <stdio.h>

int main() {
  int i, j, k, l = 1;

  for (i = 5; i >= 3; i--) {
    for (k = 5; k > i; k--) {
      printf(" ");
    }
    for (j = i; j >= l; j--) {
      printf("%d", j);
    }
    printf("\n");
    l++;
  }

  return 0;
}
#include "stdio.h"

int main() {
  for (int i = 4; i > 0; i--) {
    int a = 4;
    for (int j = i; j > 0; j--) {
      printf("%d ", a--);
    }
    printf("\n");
  }

  return 0;
}
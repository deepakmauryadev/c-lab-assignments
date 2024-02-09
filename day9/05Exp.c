#include "stdio.h"

int main() {
  int spaces = 4;

  for (int i = 1; i <= 5; i++) {
    int a = 1, s = spaces;
    for (int j = 1; j <= 5; j++) {
      if (s > 0) {
        printf("  ");
        --s;
      } else {
        printf("%d ", a++);
      }
    }
    printf("\n");
    --spaces;
  }

  return 0;
}
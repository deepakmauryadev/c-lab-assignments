#include "stdio.h"

int main() {
  for (int i = 1; i <= 5; i++) {
    int letter = 'A';

    for (int j = 1; j <= i; j++) {
      printf("%c ", letter++);
    }
    printf("\n");
  }

  return 0;
}
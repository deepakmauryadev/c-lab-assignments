#include "stdio.h"

int main() {
  int letter = 'A';

  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c ", letter);
    }
    printf("\n");
    ++letter;
  }

  return 0;
}
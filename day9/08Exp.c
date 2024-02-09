// Pyramid

#include "stdio.h"

int main() {
  int len = 9;
  int spacesLeft = (int)(len / 2), spacesRight = (int)(len / 2);

  for (int i = 1; i <= (int)(len / 2) + 1; i++) {
    int spacesOfStar = len - (spacesLeft + spacesRight);

    for (int j = 1; j <= spacesLeft; j++) {
      printf("  ");
    }
    for (int j = 1; j <= spacesOfStar; j++) {
      printf("* ");
    }
    for (int j = 1; j <= spacesRight; j++) {
      printf("  ");
    }

    printf("\n");
    --spacesLeft;
    --spacesRight;
  }

  return 0;
}
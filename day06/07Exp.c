#include "stdio.h"

int main() {
  int a, b;
  char opr;

  printf("Enter two nubers: ");
  scanf("%d %d", &a, &b);

  printf(
      "Select the operation menu (A for Add, S for subtract, M for \
multiplication, D for division): ");
  scanf(" %c", &opr);

  if (opr == 'A') {
    printf("The sum is %d\n", a + b);
  } else if (opr == 'S') {
    printf("The subtraction is %d\n", a - b);
  } else if (opr == 'M') {
    printf("The product is %d\n", a * b);
  } else if (opr == 'D') {
    printf("The division is %f\n", (float)(a / b));
  }

  return 0;
}
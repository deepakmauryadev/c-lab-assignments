#include "math.h"
#include "stdio.h"

int main() {
  int a, b, c;

  printf("Enter values for a, b and c: ");
  scanf("%d %d %d", &a, &b, &c);

  float d = (b * b) - (4 * a * c);

  if (d == 0) {
    float x = (-b / 2 * a) + (sqrt(d) / 2 * a);
    printf("The roots are real & equal.\n");
    printf("Roots are %.2f both.\n", x);
  } else if (d >= 0) {
    float x1 = (-b / 2 * a) + (sqrt(d) / 2 * a);
    float x2 = (-b / 2 * a) - (sqrt(d) / 2 * a);
    printf("The roots are real & unequal.\n");
    printf("Roots are %.2f and %.2f\n", x1, x2);
  } else {
    float p = -b / 2 * a;
    float q = sqrt(-d) / 2 * a;
    printf("The roots are imaginary.\n");
    printf("Root1 = %.2f+i%.2f\n", p, q);
    printf("Root2 = %.2f-i%.2f\n", p, q);
  }

  return 0;
}
#include "stdio.h"

float power(float a, unsigned int b) {
  int p = 1;

  for (int i = 1; i <= b; i++) {
    p *= a;
  }

  return p;
}

int main() {
  float a = power(10, 2);
  printf("%f\n", a);

  return 0;
}

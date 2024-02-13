// Ques: Find factorial of n.

#include <stdio.h>

int main() {
  unsigned int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  int f=1;
  for (int i=1; i<=n; i++) {
    f *= i;
  }

  printf("The factorial of %d is %d\n", n, f);

  return 0;
}

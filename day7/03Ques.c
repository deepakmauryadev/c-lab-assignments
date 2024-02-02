#include <stdint.h>
#include <stdio.h>

int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  for (int i=0; i<=n; i+=2) {
    printf("%d\n", i);
  }

  return 0;
}

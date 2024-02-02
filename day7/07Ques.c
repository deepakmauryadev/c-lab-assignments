#include <stdio.h>
#include <unistd.h>

int main() {
  unsigned int n;

  printf("Enter the number: ");
  scanf("%d", &n);

  int flag = 1;

  if (n >= 2) {
    for (int i=2; i<(int)(n/2); i++) {
      if (n % i == 0) {
        flag = 0;
      }
    }
  } else {
    flag = 0;
  }

  char* p = flag == 1 ? "a prime number" : "not a prime number";

  printf("The number %d is %s\n", n, p);

  return 0;
}

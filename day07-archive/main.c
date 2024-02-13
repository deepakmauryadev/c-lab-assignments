#include <stdio.h>
#include <math.h>

int findLenOfInt(int n) {
  int len = 0;
  while (n!=0) {
    ++len;
    n /= 10;
  }

  return len;
}

int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  int num = n;
  int rev = 0;
  int len = findLenOfInt(n);

  for (int i=len; i>=1; i--) {
    int lastDigit = num%10;
    rev += lastDigit * pow(10, i);
    num /= 10;
  }

  printf("%d", rev);

  return 0;
}

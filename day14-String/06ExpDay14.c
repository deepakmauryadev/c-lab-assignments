#include "stdio.h"

int main() {
  char arr1[100];
  printf("Enter string: ");
  scanf("%[^\n]s", arr1);

  int len;
  for (len = 0; arr1[len] != '\0'; len++)
    ;

  printf("Before: %s\n", arr1);

  for (int i = 0; i < len / 2; i++) {
    char temp = arr1[i];
    arr1[i] = arr1[len - i - 1];
    arr1[len - i - 1] = temp;
  }

  printf("After: %s\n", arr1);

  return 0;
}
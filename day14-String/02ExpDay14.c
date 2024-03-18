#include "stdio.h"

int main() {
  char arr1[100], arr2[100];
  printf("Enter string: ");
  scanf("%[^\n]s", arr1);

  for (int i = 0; arr1[i] != '\0'; i++) {
    arr2[i] = arr1[i];
  }

  printf("arr1: %s\n", arr1);
  printf("arr2: %s\n", arr2);

  return 0;
}
#include "stdio.h"

int main() {
  char arr1[100];
  printf("Enter string: ");
  scanf("%[^\n]s", arr1);

  int len;
  for (len = 0; arr1[len] != '\0'; len++)
    ;
  char arr2[len];

  for (int i = 0; i < len; i++) {
    arr2[i] = arr1[len - i - 1];
  }

  printf("arr1: %s\n", arr1);
  printf("arr2: %s\n", arr2);

  return 0;
}
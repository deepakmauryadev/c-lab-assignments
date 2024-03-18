#include "stdio.h"

int main() {
  char arr[100];
  printf("Enter string: ");
  scanf("%[^\n]s", arr);

  int len;
  for (len = 0; arr[len] != '\0'; len++)
    ;

  printf("The lenght is %d\n", len);

  return 0;
}
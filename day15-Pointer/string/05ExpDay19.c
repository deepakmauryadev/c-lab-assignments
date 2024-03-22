// Write a C program to check if a given string is a valid email address. Use
// appropriate validation criteria, such as the presence of '@' and '.' symbols.

#include "stdio.h"

int main() {
  char str[100];
  printf("Enter string: ");
  scanf("%[^\n]s", str);

  int foundAt = 0, foundDot = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == '@')
      foundAt = 1;
    else if (str[i] == '.' && foundAt == 1)
      foundDot = 1;
  }

  if (foundAt && foundDot) {
    printf("'%s' is a valid email address.\n");
  } else {
    printf("'%s' is not a valid email address.\n");
  }

  return 0;
}
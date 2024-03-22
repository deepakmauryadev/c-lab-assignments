// Write a C program to remove all leading and trailing spaces from a given
// string, if any.

#include "stdio.h"

int main() {
  char str[100];
  printf("Enter string: ");
  scanf("%[^\n]s", str);

  int len;
  for (len = 0; str[len] != '\0'; len++);

  int leadingSpaces = 0, trailingSpaces = 0;
  for (int i = 0; i < len; i++) {
    if (str[i] == ' ') leadingSpaces++;
    else break;
  }
  for (int i = len - 1; i >= 0; i--) {
    if (str[i] == ' ') trailingSpaces++;
     else break;
  }

  int newlen = len - leadingSpaces - trailingSpaces;
  char newstr[newlen + 1];
  for (int i = 0; i < newlen; i++) {
    newstr[i] = str[i + leadingSpaces];
  }
  newstr[newlen] = '\0';

  printf("Before: '%s'\n", str);
  printf("After: '%s'\n", newstr);

  return 0;
}
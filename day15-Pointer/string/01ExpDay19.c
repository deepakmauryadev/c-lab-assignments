// Write a C program to extract a substring from a given string. Prompt the user
// to enter the starting position and length of the substring.

#include "stdio.h"

int main() {
  char str[100];
  printf("Enter string: ");
  scanf("%[^\n]s", str);

  int start, len;
  printf("Enter start and length of substring: ");
  scanf("%d %d", &start, &len);

  char substr[len];

  for (int i = 0; i < len; i++) {
    substr[i] = str[i + start];
  }
  substr[len + 1] = '\0';

  printf("The substring is: %s\n", substr);

  return 0;
}
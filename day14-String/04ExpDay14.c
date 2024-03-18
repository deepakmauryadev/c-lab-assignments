#include "stdio.h"

int main() {
  char arr1[100], arr2[100], arr3[100], t;
  printf("Enter string 1: ");
  scanf("%[^\n]s", arr1);
  scanf("%c", &t);
  printf("Enter string 2: ");
  scanf("%[^\n]s", arr2);

  int len1, len2;
  for (len1 = 0; arr1[len1] != '\0'; len1++)
    ;
  for (len2 = 0; arr2[len2] != '\0'; len2++)
    ;

  for (int i = 0; i < len1; i++) arr3[i] = arr1[i];
  for (int i = len1; i < len1 + len2; i++) arr3[i] = arr2[i - len1];

  printf("arr1: %s\n", arr1);
  printf("arr2: %s\n", arr2);
  printf("arr3: %s\n", arr3);

  return 0;
}
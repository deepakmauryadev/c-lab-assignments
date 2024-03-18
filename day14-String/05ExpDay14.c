#include "stdio.h"

int main() {
  char arr1[100], arr2[100], t;
  printf("Enter string 1: ");
  scanf("%[^\n]s", arr1);
  scanf("%c", &t);
  printf("Enter string 2: ");
  scanf("%[^\n]s", arr2);

  int flag = 1;

  for (int i = 0; arr1[i] != '\0'; i++) {
    if (arr2[i] != arr1[i]) {
      flag = 0;
      break;
    }
  }

  if (flag == 0) {
    printf("The two inputed string are not similar.\n");
  } else {
    printf("The two inputed string are similar.\n");
  }

  return 0;
}
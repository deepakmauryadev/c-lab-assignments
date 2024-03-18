#include "stdio.h"

int main() {
  char arr1[100];
  printf("Enter string: ");
  scanf("%[^\n]s", arr1);

  int len;
  for (len = 0; arr1[len] != '\0'; len++)
    ;

  int flag = 1;

  for (int i = 0; i < len / 2; i++) {
    if (arr1[i] != arr1[len - i - 1]) {
      flag = 0;
      break;
    }
  }

  if (flag == 0) {
    printf("Inputed string is not pelindrome.\n");
  } else {
    printf("Inputed string is pelindrome.\n");
  }

  return 0;
}
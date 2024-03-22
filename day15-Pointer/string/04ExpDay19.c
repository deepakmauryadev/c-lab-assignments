// Write a C program to replace multiple occurrences of a specific word present
// in a given sentence with a single occurrence.

#include "stdio.h"
#include "string.h"

int main() {
  char str[100];
  printf("Enter string: ");
  scanf("%[^\n]s", str);

  char strArr[100][100];
  int i1 = 0, i2 = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      strArr[i1++][i2] = '\0';
      i2 = 0;
    } else {
      strArr[i1][i2++] = str[i];
    }
  }

  char filterdStrArr[100][100];
  int len = i1 + 1, newlen = 0;
  for (int i = 0; i < len; i++) {
    int isDuplicate = 0;
    for (int j = 0; j < newlen; j++) {
      if (strcmp(filterdStrArr[j], strArr[i]) == 0) {
        isDuplicate = 1;
        break;
      }
    }

    if (!isDuplicate) {
      strcpy(filterdStrArr[newlen++], strArr[i]);
    }
  }

  printf("Filtered String: ");
  for (int i = 0; i <= newlen; i++) {
    printf("%s ", filterdStrArr[i]);
  }
  printf("\n");

  return 0;
}
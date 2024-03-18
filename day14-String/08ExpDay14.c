#include "stdio.h"

int main() {
  char arr[100];
  printf("Enter string: ");
  scanf("%[^\n]s", arr);

  int freq[256] = {0};

  for (int i = 0; arr[i] != '\0'; i++) {
    freq[(int)arr[i]]++;
  }

  for (int i = 0; i < 256; i++) {
    if (freq[i] != 0) {
      printf("%c: %d\n", i, freq[i]);
    }
  }

  return 0;
}
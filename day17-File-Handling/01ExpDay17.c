#include "stdio.h"

int main() {
  FILE *fp;

  fp = fopen("test.txt", "r");

  if (fp == NULL) {
    printf("Error reading file!\n");
    return 1;
  }

  char ch;

  while ((ch = fgetc(fp)) != EOF) {
    printf("%c", ch);
  }

  fclose(fp);

  return 0;
}
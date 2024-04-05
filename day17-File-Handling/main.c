#include "stdio.h"

int main() {
  FILE *fp;

  fp = fopen("test.txt", "w");

  if (fp == NULL) {
    printf("Error reading file!\n");
    return 1;
  }

  char text[] = "Hello world!";
  int wbytes = fprintf(fp, "%s", text);

  if (wbytes < 0) {
    printf("Error writing file!\n");
    fclose(fp);
    return 1;
  }

  printf("Successfully written %d bytes.\n", wbytes);

  fclose(fp);

  return 0;
}
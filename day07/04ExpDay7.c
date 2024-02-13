// Ques: WAP to take 10 different numbers as input. Print their sum and average.

#include "stdio.h"

int main() {
  int sum = 0;

  for (int i = 1; i <= 10; i++) {
    int n;
    scanf("%d", &n);
    sum += n;
  }

  printf("The sum is %d\n", sum);
  printf("The average is %f\n", (float)(sum / 3));

  return 0;
}
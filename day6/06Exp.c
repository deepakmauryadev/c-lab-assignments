#include "stdio.h"

int main() {
  int m;
  char grade;

  printf("Enter total marks secured by student: ");
  scanf("%d", &m);

  if (m <= 100 && m >= 90) {
    grade = 'O';
  } else if (m < 90 && m >= 80) {
    grade = 'E';
  } else if (m < 80 && m >= 70) {
    grade = 'A';
  } else if (m < 70 && m >= 60) {
    grade = 'B';
  } else if (m < 60 && m >= 50) {
    grade = 'C';
  } else if (m < 50 && m >= 40) {
    grade = 'D';
  } else {
    grade = 'F';
  }

  printf("Secured grade is %c", grade);

  return 0;
}
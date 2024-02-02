#include "stdio.h"

int main() {
  int n;
  printf("Enter the week day: ");
  scanf("%d", &n);

  char* day;

  switch (n) {
    case 0:
      day = "Sunday";
      break;
    case 1:
      day = "Monday";
      break;
    case 2:
      day = "Tuesday";
      break;
    case 3:
      day = "Wednesday";
      break;
    case 4:
      day = "Thursday";
      break;
    case 5:
      day = "Friday";
      break;
    case 6:
      day = "Saturday";
      break;

    default:
      break;
  }

  printf("This is %s", day);

  return 0;
}
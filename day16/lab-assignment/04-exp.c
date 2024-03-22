// WAP to add two times (in hr-min-sec) by passing structure to a function.

#include "stdio.h"

struct time {
  int hr;
  int min;
  int sec;
};

int main() {
  struct time t1, t2, sum;
  printf("Enter time1 (hh:mm:ss): ");
  scanf("%d:%d:%d", &t1.hr, &t1.min, &t1.sec);
  printf("Enter time2 (hh:mm:ss): ");
  scanf("%d:%d:%d", &t2.hr, &t2.min, &t2.sec);

  sum.hr = t1.hr + t2.hr;
  sum.min = t1.min + t2.min;
  sum.sec = t1.sec + t2.sec;

  while (sum.sec > 60) {
    sum.min++;
    sum.sec -= 60;
  }
  while (sum.min > 60) {
    sum.hr++;
    sum.min -= 60;
  }

  printf("The sum is: %d:%d:%d\n", sum.hr, sum.min, sum.sec);

  return 0;
}
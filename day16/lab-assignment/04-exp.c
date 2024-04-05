// WAP to add two times (in hr-min-sec) by passing structure to a function.

#include "stdio.h"

struct time {
  int hr;
  int min;
  int sec;
};

typedef struct time Time;

Time addTime(Time t1, Time t2) {
  Time sum;

  sum.hr = t1.hr + t2.hr;
  sum.min = t1.min + t2.min;
  sum.sec = t1.sec + t2.sec;

  while (sum.sec >= 60) {
    sum.min++;
    sum.sec -= 60;
  }
  while (sum.min >= 60) {
    sum.hr++;
    sum.min -= 60;
  }

  return sum;
}

int main() {
  Time t1, t2;

  printf("Enter time1 (hh:mm:ss): ");
  scanf("%d:%d:%d", &t1.hr, &t1.min, &t1.sec);
  printf("Enter time2 (hh:mm:ss): ");
  scanf("%d:%d:%d", &t2.hr, &t2.min, &t2.sec);

  Time sum = addTime(t1, t2);
  
  printf("The sum is: %d:%d:%d\n", sum.hr, sum.min, sum.sec);

  return 0;
}
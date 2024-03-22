#include "stdio.h"

struct time {
  int hr;
  int min;
  int sec;
};

struct t {
  int carno;
  struct time st;
  struct time rt;
};

int main() {
  struct t r1;

  printf("Start time for car1 (hh:mm:ss): ");
  scanf("%d:%d:%d", &r1.st.hr, &r1.st.min, &r1.st.sec);
  printf("Finish time for car1 (hh:mm:ss): ");
  scanf("%d:%d:%d", &r1.rt.hr, &r1.rt.min, &r1.rt.sec);

  printf("Start time of car1: %d:%d:%d\n", r1.st.hr, r1.st.min, r1.st.sec);
  printf("Finish time of car1: %d:%d:%d\n", r1.rt.hr, r1.rt.min, r1.rt.sec);

  return 0;
}
// WAP to add two distances (in km-meter) using structures.

#include "stdio.h"

struct distance {
  int km;
  int m;
};

int main() {
  struct distance d1, d2, sum;
  printf("Enter data for 1st distance.\n");
  printf("Enter km: ");
  scanf("%d", &d1.km);
  printf("Enter m: ");
  scanf("%d", &d1.m);

  printf("Enter data for 2st distance.\n");
  printf("Enter km: ");
  scanf("%d", &d2.km);
  printf("Enter m: ");
  scanf("%d", &d2.m);

  sum.km = d1.km + d2.km;
  sum.m = d1.m + d2.m;

  while (sum.m >= 1000) {
    sum.km++;
    sum.m -= 1000;
  }

  printf("Sum of the two distances is %dkm %dm\n", sum.km, sum.m);

  return 0;
}
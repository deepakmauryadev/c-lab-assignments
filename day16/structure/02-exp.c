#include "stdio.h"

struct book {
  char name[100];
  int pages;
  float price;
};

int main() {
  struct book book1 = {"C Lang", 10000, 699.99};
  struct book book2 = {"Python", 12000, 899.99};

  printf("Name: %s, Pages: %d, Price: %.2f\n", book1.name, book1.pages,
         book1.price);
  printf("Name: %s, Pages: %d, Price: %.2f\n", book2.name, book2.pages,
         book2.price);

  return 0;
}

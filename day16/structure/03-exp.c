#include "stdio.h"

struct book {
  char name[100];
  int pages;
  float price;
};

int main() {
  struct book book1;

  printf("Enter the name of the book: ");
  scanf("%[^\n]s", book1.name);
  printf("Pages: ");
  scanf("%d", &book1.pages);
  printf("Prices: ");
  scanf("%f", &book1.price);

  printf("Name: %s, Pages: %d, Price: %.2f\n", book1.name, book1.pages,
         book1.price);

  return 0;
}

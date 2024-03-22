// WAP to store one student’s information (i.e. student’s roll no, name, gender,
// marks etc) of an educational institute and display all the data, using
// structure

#include "stdio.h"

struct student {
  int rollno;
  char name[100];
  char gender[20];
  float marks;
};

int main() {
  struct student s1;
  char t;

  printf("Roll no: ");
  scanf("%d", &s1.rollno);
  scanf("%c", &t);
  printf("Name: ");
  scanf("%[^\n]s", s1.name);
  scanf("%c", &t);
  printf("Gender: ");
  scanf("%[^\n]s", s1.gender);
  scanf("%c", &t);
  printf("Marks: ");
  scanf("%f", &s1.marks);

  printf("Roll no: %d, Name: %s, Gender: %s, Marks: %.2f\n", s1.rollno, s1.name,
         s1.gender, s1.marks);

  return 0;
}
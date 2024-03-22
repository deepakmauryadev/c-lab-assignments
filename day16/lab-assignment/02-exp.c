// WAP to store n students’ information (i.e. student’s roll no, name, gender,
// marks in 5 subjects etc) of an educational institute and display all the data
// with total marks of each student, using array of structure. If full mark of
// each subject is considered as 100 and pass mark as 40, then display the list
// of students failed in a particular subject.

#include "stdio.h"

struct student {
  int rollno;
  char name[50];
  char gender[20];
  int marks[5];
};

int main() {
  int n;
  printf("Enter the no of students: ");
  scanf("%d", &n);
  struct student stdarr[n];

  for (int i = 0; i < n; i++) {
    struct student s;

    printf("Enter details for student %d\n", i + 1);
    printf("Enter roll no: ");
    scanf("%d", &s.rollno);
    printf("Enter name: ");
    scanf(" %[^\n]s", s.name);
    printf("Enter gender: ");
    scanf(" %[^\n]s", s.gender);

    for (int j = 0; j < 5; j++) {
      printf("Enter marks for subject %d: ", j + 1);
      scanf("%d", &s.marks[j]);
    }
    printf("\n");
    stdarr[i] = s;
  }
  int failedSubNo, failedStdCount = 0;
  printf("Enter subject number whose failed list to be displayed: ");
  scanf("%d", &failedSubNo);

  printf("\nStudent details are.\n");
  for (int i = 0; i < n; i++) {
    struct student s = stdarr[i];
    printf("Roll no: %d\nName: %s\nGender: %s\n", s.rollno, s.name, s.gender);
    for (int j = 0; j < 5; j++) {
      printf("Mark in subject %d: %d\n", j, s.marks[j]);
      if (j + 1 == failedSubNo && s.marks[j] < 40) failedStdCount++;
    }
  }
  printf("Number of the failed student in subject %d are: %d", failedSubNo,
         failedStdCount);

  return 0;
}


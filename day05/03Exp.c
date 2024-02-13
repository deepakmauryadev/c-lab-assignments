#include "stdio.h"

int main() {
  char c;

  printf("Enter an alphabet: ");
  scanf("%c", &c);

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int isVowel = 0;

    for (int i = 0; i < sizeof(vowels); i++) {
      if (c == vowels[i]) {
        isVowel = 1;
        break;
      }
    }

    printf("%d", isVowel);

    if (isVowel == 1) {
      printf("The entered character '%c' is a vowel.\n", c);
    } else {
      printf("The entered character '%c' is a consonant.\n", c);
    }
  } else {
    printf("The entered character '%c' is not an alphabet.\n", c);
  }

  return 0;
}
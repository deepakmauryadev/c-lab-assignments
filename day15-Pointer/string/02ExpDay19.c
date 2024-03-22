// Write a program to count the number of vowels, consonants, new lines and the
// total number of characters and words present in a string.

#include "stdio.h"

int checkVowel(char s);

int main() {
  char str[100];
  printf("Enter string: ");
  scanf("%[^\n]s", str);

  int len, vowels = 0, consonents = 0, newlines = 0, words = 1;
  for (len = 0; str[len] != '\0'; len++) {
    if (str[len] == '\n') newlines++;
    else if (str[len] == ' ') words++;
    else {
      if (checkVowel(str[len]) == 1) vowels++;
      else consonents++;
    }
  }

  printf(
      "Vowels=%d, Consonenets=%d, New Lines=%d, Total no of Characters=%d, Total Words=%d\n",
      vowels, consonents, newlines, len, words);

  return 0;
}

int checkVowel(char s) {
  char vowel[10] = "AEIOUaeiou";

  for (int i = 0; i < 10; i++) {
    if (s == vowel[i]) return 1;
  }

  return 0;
}
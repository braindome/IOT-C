#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isVowel(char letter) {
  if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') return true;
  else return false;
}

int countVowels(char input[256]) {
  int count = 0;
    for (int i = 0; i < strlen(input); i++) {
    char ch = input[i];
    if (isVowel(ch)) count++;
  }
  return count;
}

int countLetters(char input[256]) {
  int count = 0;
  for (int i = 0; i < strlen(input); i++) {
    char ch = input[i];
    if (ch != ' ') count++;
  }
  return count;
}

int main() {
  char input[256];
  printf("Input your string:\n");
  scanf("%255s", input);
  

  printf("String contains %d vowels, %d letters in total (not counting spaces)\n", countVowels(input), countLetters(input));
}
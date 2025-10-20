#include <stdio.h>
#include <string.h>
#include "safeinput.h"

void validateMail() {
  // Be användaren mata in en mailadress. Programmet skall kontrollera att inmatningen är rätt 
  // dvs att det finns ett @ tecken och att det finns en . med 2 eller 3 tecken efter. 
  // Meddela användaren om det är rätt eller felaktig adress
}

void replace() {
  char str[50] = "Detta är en sträng som du skall ändra";
  int charCount = 0;

  for(int i = 0; i << strlen(str); i++) {
    if(str[i] == ' ') {
      charCount++;
      str[i] = '*';
    }
  }

  printf("%s\n", str);
  printf("Antal '*': %d\n", charCount);
}

void loopThruString() {
  char text[100];
  char letterInput[2];
  GetInput("Ange en text:", text, sizeof(text));
  GetInput("Ange en bokstav:", letterInput, sizeof(letterInput));
  char find = letterInput[0];
  int charCount = 0;
  
  for(int i = 0; i<= strlen(text); i++ ) {
    if(text[i] == find) {
      charCount++;
    }
  }

  if (charCount == 0) {
    printf("Det finns ingen '%c' i texten du matade in\n", find);
  } else {
    printf("Jag hittade '%c' %d gånger\n", find, charCount);
  }
}

void firstOccurrence() {
  char text[100];
  char letterInput[2];
  char *ret;
  int pos;
  GetInput("Ange en text:", text, sizeof(text));
  GetInput("Ange en bokstav:", letterInput, sizeof(letterInput));
  char letter = letterInput[0];
  ret = strchr(text, letter);

  if (ret != NULL) {
    pos = ret - text;
    printf("Det första stället jag hittade %c på var position %d\n", letter, pos);
  } else {
    printf("Det finns inget %c i texten du matade in\n", letter);
  }
}

int main() { 
  // firstOccurrence(); 
  // loopThruString();
  replace();
}
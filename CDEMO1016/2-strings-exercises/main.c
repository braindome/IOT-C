#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "safeinput.h"

void capitalize() {
  // Säg att du matar in ens sträng: kurt andersson
  // Skriv kod så att "nya ord" i variabeln namn börjar med stora bokstäver.
  // Resultatet skall bli så här "Kurt Andersson"
  // Tips: tolower, toupper
  char inputText[100];
  char *token;
  char divider[2] = " ";
  GetInput("Ange text: ", inputText, sizeof(inputText));

  token = strtok(inputText, divider);
  token[0] = toupper(token[0]);
  char upperCaseInputText[100];

  while( token != NULL ) {
   printf( " %s\n", token );
   token = strtok(NULL, divider);
   token[0] = toupper(token[0]);
   strcpy(upperCaseInputText, token);
  }

  printf("%s\n", upperCaseInputText);
}

void palindrome() {
  // Be användare mata in ett ord eller en mening. Programmet skall kontrollera om det ordet är 
  // en palindrom dvs om ordet blir likadant om man läser framifrån och bakifrån. 
  // Exempel på palindrom är namn som ”anna” eller ”otto” eller en mening som ”ni talar bra latin”. 
  // Meddela användaren om det är en palindrom eller ej.
  // OBS: mellanslag "tas bort"! Stora/små bokstäver är samma  
  char inputText[100];
  GetInput("Ange text: ", inputText, sizeof(inputText));

  char formattedText[100];
  char formattedTextReversed[100];

  int count = 0;
  for(int i = 0; i < strlen(inputText); i++) {
    if(inputText[i] == ' ') continue;
    formattedText[count] = tolower(inputText[i]);
    count++;
  }
  formattedText[count] = 0;
  printf("Formatted text: %s\n", formattedText);

  count = 0;
  for(int i = strlen(formattedText)-1; i >= 0; i--) {
    formattedTextReversed[count] = formattedText[i];
    count++;
  }

  if(!strcmp(formattedText, formattedTextReversed)) {
    printf("The text is a palindrome");
  } else printf("Text is NOT a palindrome");
  

}

void wordCount() {
  // Gör ett program där användaren får mata in en mening t ex ”Detta är min text som jag matar in”. 
  // Programmet skall räkna ut hur många ord meningen består av och meddela användaren om detta.
  char inputText[100];
  GetInput("Ange text: ", inputText, sizeof(inputText));
  const char divider[2] = " ";
  char *token;
  token = strtok(inputText, divider);
  
  int wordCount = 0;

  while( token != NULL ) {
   printf( " %s\n", token );
   token = strtok(NULL, divider);
   wordCount++;
  }
   
  printf("Antal ord: %d\n", wordCount);

}

void validateMail() {
  // Be användaren mata in en mailadress. Programmet skall kontrollera att inmatningen är rätt 
  // dvs att det finns ett @ tecken och att det finns en . med 2 eller 3 tecken efter. 
  // Meddela användaren om det är rätt eller felaktig adress
    char text[100];
    // char letterInput[2];

    GetInput("Ange en email:",text, sizeof(text));

    bool containsAt = strchr(text, '@');
    bool containsDot = false;
    bool okAfter = false;
    char *lastDot = strrchr(text, '.');
    if(lastDot){
        containsDot = true;
        int pos = lastDot - text;
        int after = strlen(text) - pos - 1;
        okAfter = after == 2 || after == 3;
    }
    if(containsAt && containsDot && okAfter){
        printf("Ok e-post");
    }else{
        printf("Invalid e-post");
    }
}

void replace() {
  char str[50] = "Detta är en sträng som du skall ändra";
  int charCount = 0;

  for(int i = 0; i < strlen(str); i++) {
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
  // replace();
  // validateMail();
  // wordCount();
  // palindrome();
  capitalize();
}
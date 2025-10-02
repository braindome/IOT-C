#include <stdio.h>

int main() {
  while(1) {
    int choice;
    printf("Välj:\n1. Spela spel\n2. Se highscore\n3. Avsluta\n");
    scanf(" %d", &choice);
    if (choice == 1) {
      printf("Spelet startar\n");
    } else if (choice == 2) {
      printf("High score\n");
    } else if (choice == 3) {
      printf("Good bye\n");
      break;
    }
  }

}
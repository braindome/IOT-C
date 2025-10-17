#include <stdio.h>
#include <string.h>

typedef struct {
  int Age;
  int JerseyNumber;
  char Name[100];
} HockeyPlayer;

void PrintPlayer2(HockeyPlayer p) {
  strcpy(p.Name, "Whatever");
  printf("%s\n", p.Name);
}


void PrintPlayer(HockeyPlayer *p){ // Skicka en pekare för att spara på stackminne
  strcpy(p->Name, "Whatever"); // Arrow for pointers
  printf("%d\n", p->Age);
  printf("%s\n", p->Name);
}

// & address of
// * pekare till
// -> medlemmar i en struct som är en pekare
// * dereference *age = *age + 1;

// Ibland inte . utan ->
void modifyAgeAndPrint(HockeyPlayer *player) { // * betyder att vi jobbar med en pekare, en variabel som innehåller en adress
  player -> Age = 100;
  printf("%d\n",player -> Age);
  printf("%d\n",player -> JerseyNumber);
  printf("%s\n",player -> Name);
}

int main() {
  HockeyPlayer foppa;
  foppa.JerseyNumber = 21;
  foppa.Age = 53;
  PrintPlayer(&foppa);
  PrintPlayer2(foppa);
  // printf( "%lu",sizeof(foppa));
  // printf("%lu", sizeof(&foppa));

  printf("Size of struct: %lu bytes\n", sizeof(foppa));
  printf("Size of pointer: %lu bytes\n", sizeof(&foppa));

  printf("Size of HockeyPlayer*: %lu bytes\n", sizeof(HockeyPlayer*));


}
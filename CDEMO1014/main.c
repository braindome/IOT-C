#include <stdio.h>
#include <string.h>

typedef struct {
  int age;
  int jerseyNumber;
  char name[100];
} HockeyPlayer;

void PrintPlayer(HockeyPlayer p){
  printf("%d\n",p.age);
  printf("%d\n",p.jerseyNumber);
  printf("%s\n",p.name);
}
// & address of
// * pekare till
// -> medlemmar i en struct som är en pekare
// * dereference *age = *age + 1;

// Ibland inte . utan ->
void modifyAgeAndPrint(HockeyPlayer *player) { // * betyder att vi jobbar med en pekare, en variabel som innehåller en adress
  player -> age = 100;
  printf("%d\n",player -> age);
  printf("%d\n",player -> jerseyNumber);
  printf("%s\n",player -> name);
}

int main() {
  HockeyPlayer foppa;
  foppa.jerseyNumber = 21;
  foppa.age = 53;
  strcpy(foppa.name, "Foppa");

  modifyAgeAndPrint(&foppa);
}
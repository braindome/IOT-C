#include <stdio.h>

int main() {

  int year;
  if (year >= 1980 && year < 1990) {
    printf("Du är född på 1980-talet");
  } else if (year < 2000 && year >= 1990) {
    printf("Du är född på 1990-talet");
  } else if (year < 1980 || year >= 2000) {
    printf("Du är inte född på 1990 eller 1980-talet");
  }

}
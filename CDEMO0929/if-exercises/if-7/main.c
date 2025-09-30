#include <stdio.h>

int main() {
  int countryCode;
  printf("Please choose a country: \n1. Sverige\n2. Danmark \n3. Norge \n4. Finland \n5. Island\n0. Resten\n");
  scanf("%d", &countryCode);

  if (countryCode == 1 || countryCode == 2 || countryCode == 3 ) {
    printf("Du bor i Skandinavien");
  } else if (countryCode == 4 || countryCode == 5) {
    printf("Du bor inte i Skandinavien");
  } else {
    printf("Felaktig inmatning");
  }

}
#include <stdio.h>

int main() {
  float n;
  printf("Ange din temperatur: ");
  scanf("%f", &n);

  if (n < 37.8) {
    printf("Du har inte feber\n");
  } else if (n > 37.8) {
    printf("Du har feber\n");
  } else if (n > 39.5) {
    printf("Du bör uppsöka läkare\n");
  }
}
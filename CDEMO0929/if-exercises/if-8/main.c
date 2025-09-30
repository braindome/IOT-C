#include <stdio.h>
#include <stdbool.h>

int main() {
  int amount;
  bool hasDiscount;
  int discountChoice;
  printf("Hur mycket pengar har du? ");
  scanf("%d", &amount);
  printf("Har du rabatt?\n1. Ja\n2. Nej\n");
  scanf("%d", &discountChoice);

  if (discountChoice == 1) {
    hasDiscount = true;
  } else {
    hasDiscount = false;
  }

  if (amount >= 15 && amount <= 25 ) {
    if (!hasDiscount) {
      printf("Du kan köpa en liten hamburgare\n");
    } else {
      printf("Du kan köpa en liten hamburgare och en pommes frites\n");
    }
  } else if (amount > 25 && amount <= 50) {
    if (!hasDiscount) {
      printf("Du kan köpa en stor hamburgare\n");
    } else {
      printf("Du kan köpa en stor hamburgare och pommes frites\n");
    }
  } else if (amount > 60 || (amount >= 50 && amount <= 60 && hasDiscount)) {
    printf("Du kan köpa ett meal med dryck\n");
  }

}
#include <stdio.h>

int main() {
  int amount;
  printf("Ange belopp: ");
  scanf("%d", &amount);

  int fiveHundreds;
  int twoHundreds;
  int oneHundreds;
  int fifties;
  int twenties;
  int tens;
  int ones;

  fiveHundreds = amount / 500;
  amount = amount % 500;

  twoHundreds = amount / 200;
  amount = amount % 200;

  oneHundreds = amount / 100;
  amount = amount % 100;

  fifties = amount / 50;
  amount = amount % 50;

  twenties = amount / 20;
  amount = amount % 20;

  tens = amount / 10;
  amount = amount % 10;

  ones = amount;

  printf("500: %d\n200: %d\n100: %d\n50: %d\n20: %d\n10: %d\n1: %d\n", fiveHundreds, twoHundreds, oneHundreds, fifties, twenties, tens, ones);



}
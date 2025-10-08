#include <stdio.h>

void value(void);

int main() {
  // int age;
  // printf("Hur gammal är du? ");
  // scanf("%d", &age);
  // printf("Du är %d år gammal\n", age);

  // char name[20] = "Mimmo";

  // printf("%s\n", name);
  value();

  return 0;
}

void value() {
  float year = 1, period = 5, amount = 5000, inrate = 0.12;
  float sum;
  sum = amount;
  while (year <= period) {
    sum = sum * (1 + inrate);
    year = year + 1;
  }
  printf("The total amount is %f", sum);
}
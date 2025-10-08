#include <stdio.h>

float calculateVat(float n) {
  return n * 0.2;
}

int main() {
  printf("Ange pris inkl. moms: \n");
  float price;
  scanf(" %f", &price);
  float vat = calculateVat(price);
  printf("Vat is %f\n", vat);
}
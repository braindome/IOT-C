#include <stdio.h>
#include "safeinput.h"

void swapValues(int a, int b) {
  a = b;
  b = a;
  printf("New value for A: %d\n", a);
  printf("New value for B: %d\n", b);
}

int main() {
  int a, b;
  GetInputInt("Enter first value\n", &a);
  GetInputInt("Enter second value\n", &b);
  swapValues(a, b);
}
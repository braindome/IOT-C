#include <stdio.h>
#include "safeinput.h"

// Pass by reference: swap the values of a and b in main(). Passing by
// reference allows to change the variable outside the function.
void swapValues(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("New value for A: %d\n", *a);
  printf("New value for B: %d\n", *b);
}

int main() {
  int a, b;
  GetInputInt("Enter first value\n", &a);
  GetInputInt("Enter second value\n", &b);
  swapValues(&a, &b);
}
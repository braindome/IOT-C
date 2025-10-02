#include <stdio.h>

int main() {
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    int input;
    printf("Ange tal: ");
    scanf(" %d", &input);
    sum = sum + input;
  }
  printf("Summan av det du matat in är: %d\n", sum);
}
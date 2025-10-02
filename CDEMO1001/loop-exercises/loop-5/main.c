#include <stdio.h>

int main() {
  int input;
  printf("Insert number: ");
  scanf(" %d", &input);

  for (int i = 1; i < input; i++) {
    printf("%d\n", i);
  }
}
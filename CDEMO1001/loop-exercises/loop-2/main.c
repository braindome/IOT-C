#include <stdio.h>

int main() {
  int start;
  int end;

  printf("Insert first number: ");
  scanf("%d", &start);
  printf("Insert second number: ");
  scanf("%d", &end);

  // FOR
  printf("For loop: \n");
  for (int i = start; i <= end; i++) {
    printf("%d\n", i);
  }

  // WHILE
  printf("While loop: \n");
  int i = start;

  while (i <= end) {
    printf("%d\n", i);
    i++;
  }
}
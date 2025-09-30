#include <stdio.h>

int main() {
  int n;
  printf("Give me a number: ");
  scanf("%d", &n);

  if (n > 10) {
    printf("Number is greater than 10\n");
  } else if (n < 10) {
    printf("Number is lesser than 10\n");
  }

}
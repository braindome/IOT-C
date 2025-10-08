#include <stdio.h>
#include <stdbool.h>

bool verifyAge(int age) {
  return age >= 18;
}

int main() {
  printf("Please insert your age: ");
  int age;
  scanf("%d", &age);
  bool isAdult = verifyAge(age);
  if (isAdult) {
    printf("Du är myndig\n");
  } else {
    printf("Du är inte myndig\n");
  }
}
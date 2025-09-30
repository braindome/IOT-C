#include <stdio.h>

int main() {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age < 18) {
    printf("You are not an adult\n");
  } else if (age >= 65) {
    printf("You need to retire\n");
  } else {
    printf("You are an adult and you still need to work\n");
  }

}
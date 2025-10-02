#include <stdbool.h>
#include <stdio.h>

int main() {
  int first;
  int second;
  int sum;
  int choice;
  bool isOngoing = true;

  while(isOngoing) {
    printf("Insert first number: ");
    scanf("%d", &first);
    printf("Insert second number: ");
    scanf("%d", &second);

    sum = first + second;
    printf("The sum is %d.\nRestart?\n1. Yes\n2. No\n", sum);
    scanf("%d", &choice);
    if (choice != 1) {
      printf("End\n");
      isOngoing = false;
    } 
  }
  return 0;
}
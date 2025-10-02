#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  while (1) {
    char answer;
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;

    printf("Rolling the dice...\n");
    printf("The values are...\n");
    printf("%d\n", die1);
    printf("%d\n", die2);

    printf("Roll the dice again?\n");
    scanf(" %c", &answer);
    if (answer != 'y') {
      break;
    }
  }


}
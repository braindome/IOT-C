#include <stdio.h>

int main() {
  printf("For loop\n");

  for(int i = 0; i <= 10; i++ ) {
    printf("%d\n", i);
  }

  printf("While loop\n");

  int num = 0;
  while(num <= 10) {
    printf("%d\n", num);
    num++;
  }
}
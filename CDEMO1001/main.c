#include <stdio.h>

int main() {  

  // int jersey;
  // printf("What jersey did Foppa use? ");
  // scanf("%d", &jersey);

  // char bokstaven = 'A';
  // printf("Bokstaven är: %c, vad kul\n", bokstaven);
  // printf("Bokstaven är: %d, vad kul\n", bokstaven);

  // float num = 12.31567;
  // printf("Värdet är %.3f hej hej\n", num);

  char bokstaven = 65;
  int age = 65;
  printf("Bokstaven är: %c, vad kul att du ar %d years\n", bokstaven,age);
  printf("Bokstaven är: %d, vad kul att du ar %c years\n", bokstaven,age);

  // FOR loop
  // Best used if you know the number of loops
  for (int year = 1972; year <= 1980; year++) {
    printf("%d\n", year);
  }

  // WHILE loop
  // semantiskt korrekt - "så länge som" de inte tryckt på exit
  int year = 9172;
  while(year <= 1980) {
    printf("%d\n",year );
    year++;
  }

  return 0;
}
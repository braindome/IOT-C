#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void calculateAvgDynamic() {
  int num;
  printf("Hur många?\n");
  if (scanf(" %d", &num) != 1) {
    printf("Felaktig inmatning.\n");
    return;
  }

  // Allokerar minnet på heap:en till den dynamiska arrayen
  int *list = malloc(num * sizeof(int));
  float sum = 0;

  // Matar in de första dalen
  for(int i = 0; i < num; i++) {
    int tal;
    printf("Ange tal %d:\n", i+1);
    scanf(" %d", &tal);
    list[i] = tal;
    sum = sum + tal; // Lägger talet till summan
  }

  printf("Snittet är %f\n", sum/num);

  // Användare kan lägga till flera
  while(1) {
    int additionalIterations;
    char choice;
    printf("Vill du lägga till fler tal? (y/n):\n");
    scanf(" %c", &choice); // Antal tal att lägga till

    if (choice == 'y') {
      printf("Ange tal:\n");
      scanf(" %d", &additionalIterations);

      // Räkna ut den nya storleken
      int totalCount = num + additionalIterations;

      // Allokerar mer minne till den förstorade arrayen
      list = (int *)realloc(list, totalCount * sizeof(int));
      for(int i = 0; i < additionalIterations; i++) {
        int tal;
        printf("Ange tal %d:\n", i+num+1); // Fortsätta räkna från slutet av förra
        scanf(" %d", &tal);
        list[num + i] = tal; // Lagrar i arrayen, börjar efter redan inlagda tal
        sum = sum + tal;
      }

      // Uppdatera och printf:a nya snittet
      num = num + additionalIterations;
      printf("Snittet är %f\n", sum/num);
    } else {
      printf("Goodbye");
      break;
    }

  }
  
  printf("Snittet är %f\n", sum/num);
  free(list);
}

void calculateAvg() {
  int num;
  printf("Hur många?\n");
  scanf(" %d", &num);

  int *list = (int *)malloc(num * sizeof(int));
  float sum = 0;
  for(int i = 0; i < num; i++) {
    int tal;
    printf("Ange tal %d:\n", i+1);
    scanf(" %d", &tal);
    list[i] = tal;
    sum = sum + tal;
  }
  float avg = sum / num;
  printf("Snittet är %f\n", avg);
  free(list);

}

int main() {
  // calculateAvg();
  calculateAvgDynamic();
}
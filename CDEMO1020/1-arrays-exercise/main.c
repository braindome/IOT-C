#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void calculateAvgDynamic() {
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
  printf("Snittet är %f\n", sum/num);

  while(1) {
    int additionalIterations;
    printf("Hur många ytterligare?\n");
    scanf(" %d", &additionalIterations);
    int totalCount = (num + additionalIterations)*sizeof(int);
    list = (int *)realloc(list, totalCount * sizeof(int));
    for(int i = 0; i < additionalIterations; i++) {
      int tal;
      printf("Ange tal %d:\n", i+num+1);
      scanf(" %d", &tal);
      list[num + i] = tal;
      sum = sum + tal;
    }
    num = totalCount;
    printf("Snittet är %f\n", sum/num);

  }

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
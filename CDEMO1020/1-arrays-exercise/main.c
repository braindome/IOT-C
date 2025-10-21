#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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
  calculateAvg();
}
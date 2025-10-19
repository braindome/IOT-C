#include <stdio.h>

int main() {
  int antal;
  scanf("%d", &antal);
  int talen[antal];

  int allaTal[4];
  for(int i = 0; i < 4; i++) {
    printf("Mata in tal %d:", i+1);
    scanf( " %d", &allaTal[i] );
    // int tal;
    // scanf(" %d", &tal);
    // allaTal[i] = tal;
  }

  // loop - ta fram det största talet
  int largestSoFar = 0;
  for(int index = 0; index < 4; index++) {
    if(allaTal[index] > largestSoFar) {
      largestSoFar = allaTal[index];
    }
  }
  printf("Largest: %d\n", largestSoFar);
}
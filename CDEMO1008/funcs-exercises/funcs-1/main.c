#include <stdio.h>

int valideratTal(int num) {
  if (num < 100) {
    printf("Valid number\n");
    return num;
  } else {
    printf("Invalid\n");
    return 0;
  }
}

int plussaTalMindre100(int a, int b) {
  return valideratTal(a) + valideratTal(b);
}

int main() {
  int summa;
  summa = plussaTalMindre100(203, 83);
  printf("Summan är %d\n", summa);
}
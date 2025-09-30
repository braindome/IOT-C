#include <stdio.h>

int main() {
  int n;
  printf("Ange hu många paket mjölk finns kvar: ");
  scanf("%d", &n);

  if (n<10) {
    printf("Beställ 30 paket\n");
  } else if (n>10 && n<20) {
    printf("Beställ 20 paket\n");
  } else {
    printf("Du behöver inte beställa någon mjölk\n");
  }

}
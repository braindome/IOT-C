#include <stdio.h>

int main() {
  int y = 42;
  int *ptr = &y;

  printf("Y: %d\n", y);
  printf("Pointer: %p\n", &*ptr);
}
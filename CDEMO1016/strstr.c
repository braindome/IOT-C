#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  char haystack[] = "AntonioSaracino";
  char needle[] = "Sarac";
  char *ret;

  // Leta efter en sträng i en sträng
  // ret = strstr(haystack, needle); // Finns needle i haystack?

  // Leta efter en char
  // ret = strchr(haystack, 'A');

  // Leta efter en char bakifrån
  //ret = strrchr(haystack, 'S');

  // printf(" %s", ret);

  // Replacea med **
  ret = strstr(haystack, needle);
  memcpy(ret, "***", 3); // sträng: sekvens av chars + 0 på slutet




  if (ret == NULL) {
    printf("FINNS INTE \n");
  } else {
    // Vilken position
    int position = ret - haystack;
    printf("FINNS på position %d\n", position);
  }
}
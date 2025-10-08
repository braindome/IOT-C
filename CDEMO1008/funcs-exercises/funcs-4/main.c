#include <stdio.h>
#include <string.h>

char * hittaLangstaOrdet(char * str1, char * str2, char * str3) {
  int len1, len2, len3;
  len1 = strlen(str1);
  len2 = strlen(str2);
  len3 = strlen(str3);

  if (len1 > len2 && len1 > len3) {
    return str1;
  } else if (len2 > len1 && len2 > len3) {
    return str2;
  } else if (len3 > len1 && len3 > len2) {
    return str3;
  } else return "Invalid";
}

int main() {
  printf("%s", hittaLangstaOrdet("pia", "madde", "erika"));
}
#include <stdio.h>
#include <limits.h>
#include <float.h>

const double pi = 3.14159265358979323846;


int main() {
  // char, short int, int, long, float, double
  // char c = 'A'; 8 bitar ; 65
  // printf("char\t%d\t%u\n", CHAR_MIN, CHAR_MAX);
  // printf("uchar\t%d\t%u\n", 0, UCHAR_MAX);

  // printf("short\t%d\t%u\n", SHRT_MIN, SHRT_MAX);
  // printf("ushort\t%d\t%u\n", 0, USHRT_MAX);

  // printf("int\t%d\t%u\n", INT_MIN, INT_MAX);
  // printf("uint\t%d\t%u\n", 0, UINT_MAX);

  // printf("long\t%ld\t%lu\n", LONG_MIN, LONG_MAX);
  // printf("ulong\t%lu\n", ULONG_MAX);

  // printf("llong\t%lld\t%llu\n", LLONG_MIN, LLONG_MAX);
  // printf("ullong\t%llu\n", ULLONG_MAX);

  // printf("float\t%e\t%e\n", FLT_MIN, FLT_MAX);
  // printf("double\t%e\t%e\n", DBL_MIN, DBL_MAX);

  // printf("char\t%d\t%d\n", sizeof(char), sizeof(char)*8);
  // printf("short\t%d\t%d\n", sizeof(short), sizeof(short)*8);
  // printf("int\t%d\t%d\n", sizeof(int), sizeof(int)*8);
  // printf("long\t%d\t%d\n", sizeof(long), sizeof(long) * 8);
  // printf("llong\t%d\t%d\n", sizeof(long long), sizeof(long long)*8);
  // printf("float\t%d\t%d\n", sizeof(float), sizeof(float)*8);
  // printf("double\t%d\t%d\n", sizeof(double), sizeof(double)*8);

  float radie;
  float omkrets;
  printf("Ange radien: ");
  scanf("%f", &radie);

  omkrets = radie *2 * pi;
  printf("Omkretsen blev %f\n", omkrets);


}


#include <stdio.h>
int main() {
  short a;
  long b;
  long long c;
  long double d;

//  int16_t e;

  unsigned u;
  unsigned short su;
  unsigned long lu;

  //printf("size of 16 bit int: %d \n\n", sizeof(e));

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}

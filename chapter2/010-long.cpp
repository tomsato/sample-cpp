#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
  // 符号付きlong型
  long x1 = 10;
  long x2 = LONG_MAX;
  long x3 = LONG_MIN;

  printf("sizeof long: %lu\n", sizeof(long)); // sizeof long: 8
  printf("x1: %ld\n", x1);                    // x1: 10
  printf("x2 max: %ld %lx\n", x2, x2);        // x2 max: 9223372036854775807 7fffffffffffffff
  printf("x3 min: %ld %lx\n", x3, x3);        // x3 min: -9223372036854775808 8000000000000000

  // 符号無しlong型
  unsigned long y1 = 10;
  unsigned long y2 = ULONG_MAX;
  unsigned long y3 = 0; // ULONG_MIN ;

  printf("y1: %ld\n", y1);             // y1: 10
  printf("y2 max: %lu %lx\n", y2, y2); // y2 max: 18446744073709551615 ffffffffffffffff
  printf("y3 min: %lu %lx\n", y3, y3); // y3 min: 0 0

  return 0;
}
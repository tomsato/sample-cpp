#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
  // 符号付きlong long型
  long long x1 = 10;
  long long x2 = LLONG_MAX;
  long long x3 = LLONG_MIN;

  printf("sizeof long long: %lu\n", sizeof(long long)); // sizeof long: 8
  printf("x1: %lld\n", x1);                             // x1: 10
  printf("x2 max: %lld %llx\n", x2, x2);                // x2 max: 9223372036854775807 7fffffffffffffff
  printf("x3 min: %lld %llx\n", x3, x3);                // x3 min: -9223372036854775808 8000000000000000

  // 符号無しlong long型
  unsigned long long y1 = 10;
  unsigned long long y2 = ULLONG_MAX;
  unsigned long long y3 = 0; // ULLONG_MIN ;

  printf("y1: %llu\n", y1);              // y1: 10
  printf("y2 max: %llu %llx\n", y2, y2); // y2 max: 18446744073709551615 ffffffffffffffff
  printf("y3 min: %llu %llx\n", y3, y3); // y3 min: 0 0

  return 0;
}
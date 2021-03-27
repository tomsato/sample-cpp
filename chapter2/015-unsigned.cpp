#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
  // 符号無しint型
  unsigned int x1 = 10;
  unsigned int x2 = UINT_MAX;
  unsigned int x3 = 0; // UINT_MIN;

  printf("sizeof unsigned int: %lu\n", sizeof(unsigned int)); // sizeof unsigned int: 4
  printf("x1: %u\n", x1);                                     // x1: 10
  printf("x2 max: %u %x\n", x2, x2);                          // x2 max: 4294967295 ffffffff
  printf("x3 min: %u %x\n", x3, x3);                          // x3 min: 0 0

  // unsigned intでマイナス値を代入する
  unsigned int y1 = -10;
  printf("y1: %u\n", y1); // y1: 4294967286

  return 0;
}
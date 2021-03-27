#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
  // 符号付きshort型
  short x1 = 10;
  short x2 = SHRT_MAX;
  short x3 = SHRT_MIN;

  printf("sizeof short: %lu\n", sizeof(short)); // sizeof short: 2
  printf("x1: %d\n", x1);                       // x1: 10
  printf("x2 max: %d %x\n", x2, x2);            // x2 max: 32767 7fff
  printf("x3 min: %d %x\n", x3, x3);            // x3 min: -32768 ffff8000

  // 符号無しshort型
  unsigned short y1 = 10;
  unsigned short y2 = USHRT_MAX;
  unsigned short y3 = 0; // USHRT_MIN ;

  printf("y1: %d\n", y1);            // y1: 10
  printf("y2 max: %u %x\n", y2, y2); // y2 max: 65535 ffff
  printf("y3 min: %u %x\n", y3, y3); // y3 min: 0 0

  return 0;
}
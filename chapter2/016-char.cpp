#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
  // 符号付きchar型
  char x1 = 'C';
  char x2 = CHAR_MAX;
  char x3 = CHAR_MIN;

  printf("sizeof char: %lu\n", sizeof(char)); // sizeof char: 1
  printf("x1: %c\n", x1);                     // x1: C
  printf("x2 max: %d %x\n", x2, x2);          // x2 max: 127 7f
  printf("x3 min: %d %x\n", x3, x3);          // x3 min: -128 ffffff80

  // 符号無しchar型
  unsigned char y1 = 'C';
  unsigned char y2 = UCHAR_MAX;
  unsigned char y3 = 0; // UCHAR_MIN ;

  printf("y1: %c\n", y1);            // y1: C
  printf("y2 max: %d %x\n", y2, y2); // y2 max: 255 ff
  printf("y3 min: %d %x\n", y3, y3); // y3 min: 0 0

  return 0;
}
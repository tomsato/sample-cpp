#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
  // 符号付きint型
  int x1 = 10;
  int x2 = INT_MAX;
  int x3 = INT_MIN;

  printf("sizeof int: %lu\n", sizeof(int)); // sizeof int: 4
  printf("x1: %d\n", x1);                   // x1: 10
  printf("x2 max: %d %x\n", x2, x2);        // x2 max: 2147483647 7fffffff
  printf("x3 min: %d %x\n", x3, x3);        // x3 min: -2147483648 80000000

  // 符号付きint型を明示的に指定する
  signed int y1 = 10;
  signed int y2 = INT_MAX;
  signed int y3 = INT_MIN;

  printf("y1: %d\n", y1);            // y1: 10
  printf("y2 max: %d %x\n", y2, y2); // y2 max: 2147483647 7ffffff
  printf("y3 min: %d %x\n", y3, y3); // y3 min: -2147483648 80000000

  return 0;
}
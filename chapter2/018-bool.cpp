#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // boole型
  bool x1 = true;
  bool x2 = false;

  printf("sizeof bool: %lu\n", sizeof(bool)); // sizeof bool: 1
  printf("x1: %d\n", x1);                     // x1: 1
  printf("x2: %d\n", x2);                     // x2: 0

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 引数がない関数
int func1()
{
  puts("in func1");
  return 1;
}
// 戻り値がない関数
void func2(int x)
{
  printf("in func2 [%d]\n", x);
}

int main(void)
{
  int ret = func1();              // in func1
  printf("int main [%d]\n", ret); // int main [1]

  func2(1); // int main [1]in func2 [1]

  // 型を指定しないポインタ
  void *mem = malloc(10);
  memset(mem, 0, 10);
  printf("mem[0]: %x", ((unsigned char *)mem)[0]); // mem[0]: 0
  free(mem);

  return 0;
}
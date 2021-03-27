#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_CTYPE, "");

  char s[] = "masuda";
  wchar_t w[] = L"増田智明";

  printf("name: %s\n", s);  // name: masuda
  printf("name: %ls\n", w); // name: 増田智明

  return 0;
}
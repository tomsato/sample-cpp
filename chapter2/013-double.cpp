#include <stdio.h>
#include <float.h>

int main(void)
{
  // double型
  double x1 = 100.23;
  double x2 = DBL_MAX;
  double x3 = DBL_MIN;

  printf("sizeof double: %lu\n", sizeof(double)); // sizeof double: 8
  printf("x1: %f\n", x1);                         // x1: 100.230003
  printf("x2 max: %e\n", x2);                     // x2 max: 1.797693e+308
  printf("x3 min: %e\n", x3);                     // x3 min: 2.225074e-308

  return 0;
}
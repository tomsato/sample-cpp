#include <stdio.h>
#include <float.h>

int main(void)
{
  // float型
  float x1 = 100.23;
  float x2 = FLT_MAX;
  float x3 = FLT_MIN;

  printf("sizeof float: %lu\n", sizeof(float)); // sizeof float: 4
  printf("x1: %f\n", x1);                       // x1: 100.230003
  printf("x2 max: %f %e\n", x2, x2);            // x2 max: 340282346638528859811704183484516925440.000000 3.402823e+38
  printf("x3 min: %f %e\n", x3, x3);            // x3 min: 0.000000 1.175494e-38

  return 0;
}
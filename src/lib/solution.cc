#include "solution.h"

void Solution::SwapByRef(int &x, int &y)
{
  int z;
  z = x;
  x = y;
  y = z;
}

void Solution::SwapByPtr(int *x, int *y)
{
  int z;
  z = *x;
  *x = *y;
  *y = z;
}
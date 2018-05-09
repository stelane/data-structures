#include <stdio.h>
#include <stdlib.h>
#include "compare_function.h"

int compare (void* ptr1, void* ptr2);

int main (void)
{
  float f1 = 21.7;
  float f2 = 21.9;
  float lrg;

  lrg = (*(float*) larger (&f1, &f2, compare));
  printf ("Larger value is %5.1f\n", lrg);
  // %5.1f means 5 is the allocated characters for the float and .1 is the
  // number of characters past the decimal
  return 0;
}

int compare (void* ptr1, void* ptr2)
{
  if (*(float*)ptr1 >= *(float*)ptr2)
    return 1;
  else
    return -1;
}

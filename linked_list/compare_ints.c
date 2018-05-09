#include <stdio.h>
#include <stdlib.h>
#include "compare_function.h"

int compare (void* ptr1, void* ptr2);

int main (void)
{
  int i = 7;
  int j = 10;
  int lrg;

  lrg = (*(int*) larger (&i, &j, compare));

  printf ("Larger value is %d\n", lrg);
  return 0;
}

int compare (void* ptr1, void* ptr2)
{
  if (*(int*)ptr1 >= *(int*)ptr2)
    return 1;
  else
    return -1;
}

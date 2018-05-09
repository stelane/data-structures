#include <stdio.h>

// Prototype statements
  long fib (long num);

int main (void)
{
  int seriesSize = 10;

  printf("Print a Fibonacci series.\n");
  for (int looper = 0; looper < seriesSize; looper ++)
    {
      if (looper % 5)
        printf(", %81d", fib(looper));
      else
        printf("\n%81d", fib(looper));
    }
  printf("\n");
  return 0;
}

long fib (long num)
{
  if (num == 0 || num == 1)
    return num;
  return (fib (num - 1) + fib (num - 2));
}

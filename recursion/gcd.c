// Greatest Common Divisor

#include <stdio.h>
#include <ctype.h> // math lib

int gcd (int a, int b);

int main (void)
{
  int gcdResult;

  printf("Test GCD Algorithm\n");

  gcdResult = gcd (10, 25);
  printf("GCD of 10 & 25 is %d", gcdResult);
  printf("\nEnd of Test\n");
  return 0;
}

int gcd (int a, int b)
{
  if (b == 0)
    return a;
  if (a == 0)
    return b;
  return gcd (b, a % b);
}

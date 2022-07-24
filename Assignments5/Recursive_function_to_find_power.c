
#include <stdio.h>
int power(int base, int powerRaised)
{
  if (powerRaised != 0)
    return (base * power(base, powerRaised -1));
  else
    return 1;
}
int main()
{
  int base, powerRaised, result;
  printf("Enter the base number : ");
  scanf("%d", &base);
  printf("Enter the power number(positive integer) : ");
  scanf("%d", &powerRaised);
  result = power(base, powerRaised);
  printf("%d^%d = %d", base, powerRaised, result);
  return 0;
}



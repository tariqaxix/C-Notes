
#include <stdio.h>
int main()
{
  int dd, ds, q, r;
  printf("Enter the dividend: ");
  scanf("%d", &dd);
  printf("Enter the divisor: ");
  scanf("%d", &ds);
  q = dd / ds;
  r = dd % ds;
  printf("The quotient is %d\n", q);
  printf("The remainder is %d", r);
  return 0;
}



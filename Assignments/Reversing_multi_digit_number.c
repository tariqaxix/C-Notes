
#include <stdio.h>
void main()
{
  int n, a, r, s = 0;
  printf("\nEnter a number: ");
  scanf("%d", &n);
  a = n;
  do 
  {
    r = n % 10;
    s = s * 10 + r;
    n = n / 10;
  } while (n > 0);
  printf("\n The reverse number of %d is %d", a, s);
}



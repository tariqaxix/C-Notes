
#include <stdio.h>
#include <stdlib.h>
int main()
{
  long int x, y;
  printf("\n Enter the first number: ");
  scanf("%d", &x);
  printf("\n Enter the second number: ");
  scanf("%d", &y);
  printf("\n The absolute value of first number is %ld\n", labs(x));
  printf("\n The absolute value of second number is %ld\n", labs(y));
  return 0;
}



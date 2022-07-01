
#include <stdio.h>
int main()
{
  int a, b;
  int diff;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
  if (a > b)
  {
    diff = a - b;
  }
  else
  {
    diff = b - a;
  }
  printf("The difference of %d and %d is %d", a, b, diff);
  return 0;
}




#include <stdio.h>
int main()
{
  int x = 0;
  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Result: %d\n", (2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x));
  return 0;
}



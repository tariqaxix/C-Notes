
#include <stdio.h>
#include <stdlib.h>
int difference(int a, int b)
{
  int c;
  c = abs(a - b);
  return c;
}
int main()
{
  int num1, num2;
  int diff;
  printf("\n\nFunction : find difference of two integer numbers :\n");
  printf("--------------------------------------------------------\n");
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  diff = difference(num1, num2);
  printf("The difference of %d and %d is %d\n", num1, num2, diff);
  return 0;
}




#include <stdio.h>
int main()
{
  int a, b;
  float subtract, average;
  printf("Enter the first integer: ");
  scanf("%d", &a);
  printf("Enter the second integer: ");
  scanf("%d", &b);
  subtract = a - b;
  printf("The difference of two number is %f\n", subtract);
  average = (a + b) / 2;
  printf("The average of two number is %f\n", average);
  return 0;
}



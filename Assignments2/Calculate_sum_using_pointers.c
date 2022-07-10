
#include <stdio.h>
int main()
{
  int num1, num2, *ptr, *qtr, sum;
  printf("Enter the first integer: ");
  scanf("%d", &num1);
  printf("Enter the second integer: ");
  scanf("%d", &num2);
  ptr = &num1;
  qtr = &num2;
  sum = *ptr + *qtr;
  printf("The sum of entered number is %d\n\n", sum);
  return 0;
}




#include <stdio.h>
// Function declaration
int sum(int, int);
int main(void)
{
  int n1, n2, total;
  printf("Enter the first number: ");
  scanf("%d", &n1);
  printf("Enter the second number: ");
  scanf("%d", &n2);
  // Function call
  total = sum (n1, n2);
  printf("The total is %d\n", total);
  return 0;
}
// Function definition
int sum(int a, int b)
{
  int s;
  s = a + b;
  // Function returning value
  return s;
}



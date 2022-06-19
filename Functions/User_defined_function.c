
#include <stdio.h>
int main()
{
  int n1, n2, sum;
  printf("Enter two numbers: ");
  scanf("%d %d", &n1, &n2);
  sum = AddNumbers(n1, n2);
  printf("The sum is %d", sum);
  return 0;
}
int AddNumbers(int a, int b)
{
  int result;
  result = a + b;
  return result;
}








#include <stdio.h>
int CheckOddEven(int n1)
{
  // The & operator does a bitwise operation
  return (n1 & 1);
}
int main()
{
  int n1;
  printf("\n\n Function : Check whether the number is odd or even: \n");
  printf("---------------------------------------------------------\n");
  printf("Enter any number: ");
  scanf("%d", &n1);
  // If CheckOddEven returns 1, then number is odd
  if (CheckOddEven(n1))
  {
    printf("The entered number is odd\n\n");
  }
  else 
  {
    printf("The entered number is even\n\n");
  }
  return 0;
}



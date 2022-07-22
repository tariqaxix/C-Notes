
#include <stdio.h>
#define YES 1
#define NO 0
// Function to check and return YES or NO for EVEN or ODD
int checkEventOdd(int num)
{
  if (num % 2 == 0)
  {
    return YES;
  }
  else
  {
    return NO;
  }
}
// Main code 
int main()
{
  int n;
  n = 10;
  if (checkEventOdd(n) == YES)
  {
    printf("%d is an EVEN number\n", n);
  }
  else
  {
    printf("%d ia an ODD number\n", n);
  }
  n = 11;
  if (checkEventOdd(n) == YES)
  {
    printf("%d is an EVEN number\n", n);
  }
  else 
  {
    printf("%d is an ODD number\n", n);
  }
  return 0;
}



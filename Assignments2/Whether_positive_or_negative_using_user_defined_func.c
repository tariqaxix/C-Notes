
#include <stdio.h>
int check(int A);
int main()
{
  int A;
  printf("Enter the number A: ");
  scanf("%d", &A);
  check(A);
  return 0;
}
int check(int A)
{
  if (A > 0)
  {
    printf("%d is positive", A);
  }
  else if (A < 0)
  {
    printf("%d is negative", A);
  }
  else if (A == 0)
  {
    printf("%d is zero", A);
  }
}



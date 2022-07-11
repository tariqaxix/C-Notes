
#include <stdio.h>
void findfactorial(int, int*);
int main()
{
  int factorial;
  int num;
  printf("Input a number : ");
  scanf("%d", &num);
  findfactorial(num, &factorial);
  printf("The factorial of %d is %d \n\n", num, factorial);
  return 0;
}
void findfactorial(int n, int *f)
{
  int i;
  *f = 1;
  for (i = 1; i <= n; i++)
  *f = *f*i;
}



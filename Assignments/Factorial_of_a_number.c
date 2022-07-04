
#include <stdio.h>
int main()
{
  int num, i;
  long int fact;
  printf("Enter an integer: ");
  scanf("%d", &num);
  fact = 1;
  for (i = num; i >= 1; i--)
  {
    fact = fact * i;
  }
printf("\nThe factorial of %d is %ld", num, fact);
return 0;
}





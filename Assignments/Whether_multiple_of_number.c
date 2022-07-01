
#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (n % 7 == 0) 
{
  printf("The entered number is multiple of 7");
}
else 
{
  printf("The given number is not multiple of 7");
}
return 0;
}



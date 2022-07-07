
#include <stdio.h>
int PrimeOrNot(int);
int main()
{
  int n1, prime;
  printf("\n\nFunction : check whether a number is prime or not : \n");
  printf("---------------------------------------------------------\n");
  printf("Enter an integer: ");
  scanf("%d", &n1);
  prime = PrimeOrNot(n1);
  if (prime == 1)
  {
    printf("The number %d is a prime number. \n", n1);
  }
  else 
  {
    printf("The number %d is not a prime number. \n", n1);
  }
  return 0;
}
int PrimeOrNot(int n1)
{
  int i = 2;
  while (i <= n1/2)
  {
    if(n1 % i == 0)
    return 0;
    else
    i++;
  }
  return 1;
}



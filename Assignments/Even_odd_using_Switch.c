
#include <stdio.h>
int main()
{
  int number;
  printf("Enter a positive integer number: ");
  scanf("%d", &number);
  switch (number % 2)
  {
  case 0:
  printf("%d is an even number. \n", number);
    break;
  
  case 1:
  printf("%d is an odd number. \n", number);
    break;
  }
  return 0;
}



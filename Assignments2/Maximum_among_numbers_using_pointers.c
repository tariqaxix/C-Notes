
#include <stdio.h>
int main()
{
  int num1, num2;
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  printf("Enter the first number : ");
  scanf("%d", ptr1);
  printf("Enter the second number : ");
  scanf("%d", ptr2);
  if (*ptr1 > *ptr2)
  {
    printf("\n\n%d is the maximum number.\n\n", *ptr1);
  }
  else 
  {
    printf("\n\n%d is the maximum number.\n\n", *ptr2);
  }
  return 0;
}



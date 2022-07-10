
#include <stdio.h>
void swap(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
int main()
{
  int num1, num2;
  printf("Enter the value of num1: ");
  scanf("%d", &num1);
  printf("Enter the value of num2: ");
  scanf("%d", &num2);
  // Print values before swapping
  printf("Before swapping : num1 = %d and num2 = %d\n",num1, num2);
  // Call function by passing adress of num1 and num2
  swap(&num1, &num2);
  // Print value after swapping
  printf("After swapping : num1 = %d and num2 = %d\n", num1, num2);
  return 0;
}



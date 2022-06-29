
#include <stdio.h>
int main()
{
  int a, b, C;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
  printf("Enter the third number: ");
  scanf("%d", &C);
  printf("%d == %d is %d \n",a, b, a == b);
  printf("%d == %d is %d \n",a, C, a == C);
  printf("%d > %d is %d \n",a, b, a > b);
  printf("%d > %d is %d \n",a, C, a > C);
  printf("%d < %d is %d \n",a, b, a < b);
  printf("%d < %d is %d \n",a, C, a < C);
  printf("%d != %d is %d \n",a, b, a != b);
  printf("%d != %d is %d \n",a, C, a != C);
  printf("%d >= %d is %d \n",a, b, a >= b);
  printf("%d >= %d is %d \n",a, C, a >= C);
  printf("%d <= %d is %d \n",a, b, a <= b);
  printf("%d <= %d is %d \n",a, C, a <= C);
  return 0;
}





#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x, y, z, result, max;
  printf("\n Enter the first integer: ");
  scanf("%d", &x);
  printf("\n Enter the second integer: ");
  scanf("%d", &y);
  printf("Enter the thrid integer: ");
  scanf("%d", &z);
  result = (x + y + abs(x - y))/2;
  max = (result + z + abs(result - z))/2;
  printf("\n Maximum value of three integer is %d", max);
  printf("\n");
  return 0;
}



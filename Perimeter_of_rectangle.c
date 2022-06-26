
#include <stdio.h>
int main()
{
  float l, w, p;
  printf("Enter the length: ");
  scanf("%f", &l);
  printf("Enter the width: ");
  scanf("%f", &w);
  p = 2 * (l + w);
  printf("The perimeter of rectangle is %f", p);
  return 0;
}



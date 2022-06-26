
#include <stdio.h>
int main()
{
  int r;
  float a, p;
  printf("Enter the radius of circle: ");
  scanf("%d", &r);
  p = 2 * 3.14 * r;
  printf("The perimeter is %f", p);
  a = 3.14 * r * r;
  printf("The area of circle is %f", a);
  return 0;
}



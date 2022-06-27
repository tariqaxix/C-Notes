
#include <stdio.h>
#include <math.h>
int main(void)
{
  int r = 0;
  printf("Enter the radius: ");
  scanf("%d", &r);
  printf("The sphere of volume is %.2f\n", 4.0/3.0 * 3.14 * (pow(r, 3)));
  return 0;
}



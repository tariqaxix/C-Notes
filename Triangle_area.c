
#include <stdio.h>
int main()
{
  float base, height, area;
  printf("Enter the base: ");
  scanf("%f", &base);
  printf("Enter the height: ");
  scanf("%f", &height);
  area = (base * height) / 2;
  printf("The area id %.2f", area);
  return 0;
}



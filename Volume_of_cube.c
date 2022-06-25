
#include <stdio.h>
int main()
{
  float height, width, depth, volume;
  printf("Enter the height: ");
  scanf("%f", &height);
  printf("Enter the width: ");
  scanf("%f", &width);
  printf("Enter the depth: ");
  scanf("%f", &depth);
  volume = height * depth * width;
  printf("The volume is %.2f", volume);
  return 0;
}



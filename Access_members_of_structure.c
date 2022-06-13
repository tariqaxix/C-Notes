
#include <stdio.h>
struct Vehicle 
{
  int wheels;
  char vname[20];
  char color[10];
} v1 = {4, "Nano", "Red"};
int main()
{
  printf("Vehicle number of wheels: %d\n", v1.wheels);
  printf("Vehicle name:         %s\n", v1.vname);
  printf("Vehicle color:        %s", v1.color);
  return (0);
}



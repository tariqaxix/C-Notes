
#include <stdio.h>
extern int x = 32;
int b = 8;
int main()
{
  auto int a = 28;
  extern int b;
  printf("The value of auto variable is %d\n", a);
  printf("The value of extern variables x and b is %d, %d\n", x, b);
  x = 15;
  printf("The value of modified extern variable is %d\n", x);
  return 0;
}



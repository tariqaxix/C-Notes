
#include <stdio.h>
extern int a, b, c;
extern float f;
int main()
{
  int a, b, c;
  float f;
  a = 10;
  b = 20;
  c = a + b;
  printf("The value of c is %d\n", c);
  f = 70.0 / 3.0;
  printf("The value of f is %f\n", f);
  return 0;
}



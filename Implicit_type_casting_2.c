
#include <stdio.h>
int main()
{
  short s = 98;
  int i = 123;
  double d = 1234.5;
  // Implicit type casting
  printf("%d\n", i + s);
  printf("%d\n", sizeof(i + s));
  // Implicit type casting
  printf("%lf\n", d + i);
  printf("%d\n", sizeof(d + i));
  return 0;
}



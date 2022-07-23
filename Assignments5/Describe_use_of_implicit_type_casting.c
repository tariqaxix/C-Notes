
#include <stdio.h>
int main()
{
  int x = 10;
  char y = 'a';
  // y imlicitly converted into int. ASCII value of 'a' is 97
  x = x + y;
  // x is implicitly converted into float
  float z = x + 1.0;
  printf("x = %d, z = %f", x, z);
  return 0;
}



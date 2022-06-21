
#include <stdio.h>
#define CONCAT(x, y) x##y
int main()
{
  printf("Value1: %d\n", CONCAT(10, 20));
  printf("Value2: %d\n", CONCAT(10, 20) + 100);
  return 0;
}



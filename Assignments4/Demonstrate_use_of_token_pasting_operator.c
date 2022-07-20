
#include <stdio.h>
#define CONCAT(a, b) a##b
int main()
{
  printf("CONCAT(10, 20) = %d\n", CONCAT(10, 20));
  return 0;
}




#include <stdio.h>
#define A 100
int main()
{
  printf("Hello\n");
  #if A >= 50
    printf("More than or equal to 50\n");
  #endif
  return 0;
}



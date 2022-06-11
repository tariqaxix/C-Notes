
#include <stdio.h>
int main()
{
  int var = 50;
  int *p;
  p = &var;
  printf("Adress of p variable is %x\n", p);
  p = p - 3;
  printf("After subtracting 3: The adress of p variable is %x\n", p);
  return 0;
}



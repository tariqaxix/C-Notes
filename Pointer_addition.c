
#include <stdio.h>
int main()
{
  int var = 50;
  int *p;
  // Sore the adress of number variable
  p = &var;
  printf("The adress of p variable is %x\n", p);
  // Adding 3 to pointer variable
  p = p + 3;
  printf("After adding 3: Adress of p variable is %x\n", p);
  return 0;
}


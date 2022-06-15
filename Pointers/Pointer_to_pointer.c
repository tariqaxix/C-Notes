
#include <stdio.h>
int main()
{
  int var, *ptr, **pptr;
  var = 3000;
  ptr = &var;
  pptr = &ptr;
  printf("The value of var = %d\n", var);
  printf("Value availabe at *ptr = %d\n", *ptr);
  printf("Value availabe at **pptr = %d\n", **pptr);
  return 0;
}



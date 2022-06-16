

#include <stdio.h>
int main()
{
  int var = 20;
  // Pointer variable declaraton
  int *ip;
  ip = &var;
  printf("Adress of var variable is %x\n", &var);
  // Adress stored in variable 
  printf("Adress stored in ip variable is %x\n", ip);
  // Access the value using pointer
  printf("Value of *ip variable is %d\n", *ip);
  return 0;
}



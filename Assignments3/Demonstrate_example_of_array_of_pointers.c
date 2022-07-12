
#include <stdio.h>
int main()
{
  int a, b, c;
  int *ptr[3];
  // Assign adress of all integer variables to ptr
  ptr[0] = &a;
  ptr[1] = &b;
  ptr[2] = &c;
  // Assign the value of a, b, and c
  a = 100; 
  b = 200;
  c = 300;
  // Print the values using pointer variables
  printf("Value of a is %d, b is %d and c is %d\n", *ptr[0], *ptr[1], *ptr[2]);
  return 0;
}



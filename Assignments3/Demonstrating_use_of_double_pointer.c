
#include <stdio.h>
int main()
{
  // Integer variable
  int a;
  // Pointer to an integer
  int *p1;
  // Pointer to an integer pointer
  int **p2;
  p1 = &a;
  p2 = &p1;
  // Assign 100 to a
  a = 100;
  // Access the value of a using p1 and p2
  printf("\nThe value of a (using p1): %d", *p1);
  printf("\nThe value of a (using p2): %d", **p2);
  // Change the value of a using p1
  *p1 = 200;
  printf("\nThe value of a is %d", *p1);
  // Change the value of a using p2
  **p2 = 200;
  printf("\nThe value of a is %d", **p2);
  return 0;
}



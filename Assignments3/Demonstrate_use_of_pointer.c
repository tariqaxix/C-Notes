
#include <stdio.h>
int main()
{
  int *ptr, q;
  q = 50;
  // Adress of q is assigned to ptr
  ptr = &q;
  // Display q's value using ptr variable
  printf("%d", *ptr);
  return 0; 
}




#include <stdio.h>
const int MAX = 3;
int main()
{
  int var[] = {10, 100, 200};
  int i, *ptr;
  ptr = &var[MAX - 1];
  for(i = MAX-1; i>=0; i--)
  {
    printf("TThe adress of var[%d] = %x\n", i, ptr);
    printf("The value of var[%d] = %d\n", i, *ptr);
    ptr--;
  }
  return 0;
}



#include <stdio.H>
const int MAX = 3;
int main()
{
  int var[] = {10, 100, 200};
  int i, *ptr;
  // Array adress in pointer
  ptr = &var;
  for(i = 0; i < MAX; i++)
  {
    printf("The adress of var[%d] is %x\n", i, ptr);
    printf("The value of var[%d] = %d\n", i, *ptr);
    // Move to the next location
    ptr++;
  }
  return 0;
}



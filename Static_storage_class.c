
#include <stdio.h>
// Function declaration
void func(void);
// Global variable
static int count = 5;
main()
{
  while(count--)
  {
    func();
  }
  return 0;
}
void func(void)
{
  // Local ststic variable 
  static int i = 5;
  i++;
  printf("i is %d and count is %d\n", i, count);
}



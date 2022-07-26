
#include <stdio.h>
struct a 
{
  int val1;
  int val2;
};
struct b 
{
  int val1 : 1;
  int val2 : 1;
};
int main(void)
{
  printf("\n The size of memory engaged by a is %zu ", sizeof(struct a));
  printf("\n The size of memory engaged by b is %zu ", sizeof(struct b));
  return 0;
}



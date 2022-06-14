
#include <stdio.h>
struct abc1
{
  int a;
  int b;
} ;
struct abc2
{
  int a : 1;
  int b : 1;
} ;
int main()
{
  printf("Memory size occupied by abc1 : %zu\n", sizeof(struct abc1));
  printf("Memory size occupied by abc2 : %zu\n", sizeof(struct abc2));
  return 0;
}





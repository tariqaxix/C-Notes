
#include <stdio.h>
#define MERGE(token1, token2) token1##token2
int main(void)
{
  int var1 = 10, var2 = 20, var3 = 30;
  printf("%d\n", MERGE(var, 1));
  printf("%d\n", MERGE(var, 2));
  printf("%d\n", MERGE(var, 3));
  return 0;
}



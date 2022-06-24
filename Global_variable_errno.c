
#include <stdio.h>
#include <errno.h>
int main()
{
  FILE * fp;
  // Opening a file which doesn't exist
  fp = fopen("test.txt", "r");
  printf("Value of errno: %d\n", errno);
  return 0;
}



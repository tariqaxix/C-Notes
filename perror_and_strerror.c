
#include <stdio.h>
#include <errno.h>
int main()
{
  FILE *fp;
  fp = fopen(" test.txt ", "r");
  // Opening a file that doesn't exist
  printf("Value of errno: %d\n", errno);
  printf("The message is : %s\n", strerror(errno));
  perror("Message from perror");
  return 0;
}



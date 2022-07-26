
#include <stdio.h>
#include <errno.h>
#include <string.h>
extern int errno;
int main()
{
  FILE * pf;
  int errnum;
  pf = fopen("test.txt", "rb");
  if (pf == NULL)
  {
    errnum = errno;
    fprintf(stderr, "Value of errno is %d\n", errno);
    perror("Error printed by perror");
    fprintf(stderr, "Error opening the file : %s\n", strerror(errnum));
  }
  else
  {
    fclose(pf);
  }
  return 0;
}



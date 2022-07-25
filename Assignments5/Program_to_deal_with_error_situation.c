
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int ddend = 60;
  int dsor = 0;
  int q;
  if (dsor == 0)
  {
    fprintf(stderr, "Division by zero! Exiting...\n");
    exit(-1);
  }
  q = ddend / dsor;
  fprintf(stderr, "B=Value of quotient is %d\n", q);
  exit(0);
}



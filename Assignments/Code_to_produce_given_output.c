
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x; int y; x = 10; y = 5;
  printf("Result:\n");
  printf("x value\t y value\t Expression\t Result\n");
  printf("%d", x); printf("    |\t  %d", y);
  printf("    |\t x=y+3\t \t  x=%d", y+3); printf("\n");
  printf("%d", x); printf("    |\t  %d", y);
  printf("    |\t x=y-2\t \t  x=%d", y-2); printf("\n");
  printf("%d", x); printf("    |\t  %d", y);
  printf("    |\t x=y*5\t \t  x=%d", y*5); printf("\n");
  printf("%d", x); printf("    |\t  %d", y);
  printf("    |\t x=x/y\t \t  x=%d", x/y); printf("\n");
  printf("%d", x); printf("    |\t  %d", y);
  printf("    |\t x=x mody\t  x=%d", x%y); printf("\n");
  system("PAUSE");
  return 0;
}



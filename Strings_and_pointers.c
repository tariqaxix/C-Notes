
#include <stdio.h>
int main(void)
{
  char name[] = "Johnny Depp";
  printf("%c", *name);
  printf("%c", *(name + 1));
  printf("%c", *(name + 7));
}



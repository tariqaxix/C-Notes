
#include <stdio.h>
#define STR(X) #X
int main()
{
  printf("%s\n", STR(Hello World!));
  printf("%s\n", STR(How are you?));
  printf("%s\n", STR(I Love Programming!));
  return 0;
}



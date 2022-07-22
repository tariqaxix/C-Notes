
#include <stdio.h>
#define NUM 100
int main()
{
  // Checking a defined Macro
  #ifdef NUM
    printf("Macro Num is defined, and its value is %d\n", NUM);
  #else
    printf("Macro NUM is not defined\n");
  #endif
  // Checking an undefined Macro
  #ifdef MAX
    printf("Macro MAX is defined, and its value is %d\n", MAX);
  #else
    printf("Macro MAX is not defined\n");
  #endif
  return 0;
}



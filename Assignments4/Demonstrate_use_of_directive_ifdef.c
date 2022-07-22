
#include <stdio.h>
#define MACRO1
#define MACRO2
int main(void)
{
  // Test whether MACRO1 is defined
  #ifdef MACRO1
    printf("\nMACRO1 defined\n");
  #endif
  // Test whether MACRO1 is defined
  #ifdef MACRO2
    printf("\nMACRO2 defined\n");
  #endif
  return 0;
}



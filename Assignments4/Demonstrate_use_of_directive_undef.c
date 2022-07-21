
#include <stdio.h>
// Define Pi
#define PI 3.14
int main()
{
  printf("Value of PI is %f\n", PI);
  // Undefined PI
  #ifdef PI
  #undef PI
  #endif 
  // Redefine value of PI
  #define PI 3.14159
  printf("Value of PI after redefinition is %f\n", PI);
  return 0;
}



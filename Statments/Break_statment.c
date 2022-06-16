
#include <stdio.h>
int main()
{
  int a = 10;
  while (a < 20)
  {
    printf("The value of a is %d\n", a);
    a++;
    if(a>15)
    {
      break;
    }
  }
}




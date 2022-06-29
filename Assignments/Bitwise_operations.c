
#include <stdio.h>
int main()
{
  int m = 40, n = 80, AND_opr, OR_opr, XOR_opr, NOT_opr;
  AND_opr = (m & n);
  OR_opr = (m | n); 
  NOT_opr = (~ m);
  XOR_opr = (m ^ n);
  printf("AND_opr value is %d\n", AND_opr);
  printf("OR_opr value is %d\n", OR_opr);
  printf("NOT_opr value is %d\n", NOT_opr);
  printf("XOR_opr value is %d\n", XOR_opr);
  printf("Left_shift value is %d\n", m << 1);
  printf("Right_shift value is %d\n", m >> 1);
  return 0;
}



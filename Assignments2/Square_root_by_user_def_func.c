
#include <stdio.h>
long double sqr(long double num);
main()
{
  long double num;
  printf("Enter an integer: ");
  scanf("%Lf", &num);
  printf("%.1Lf is %.5Lf", num, sqr(num));
}
long double sqr(long double num)
{
  long double i = 0;
  int found = 1;
  while (found)
  {
    if((i * i) >= num)
    return i;
    else
    i = i + 0.00001;
  }
}



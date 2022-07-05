
#include <stdio.h>
#include <math.h>
int main()
{
  int i, n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Number     Sqaure      Cube       Sqaure Root\n", n);
  for (i = 1; i <= n; i++)
  {
    printf("%d     \t %ld      \t %ld        \t %.2f\n", i, (i * i), (i * i * i), (sqrt(i)));
  }
  return 0;
}



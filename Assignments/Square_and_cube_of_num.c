
#include <stdio.h>
int main()
{
  int count, n;
  printf("Enter the value of N: ");
  scanf("%d", &n);
  count = 1;
  start:
  printf("Num:%4d,  Sqaure:%4d,  Cube:%4d\n", count, (count * count), (count * count * count));
  count++;
  if (count <= n)
  {
    goto start;
  }
  return 0;
}



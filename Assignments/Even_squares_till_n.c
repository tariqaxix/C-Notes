
#include <stdio.h>
int main()
{
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 0; i * i <= n; i++)
  {
    if ((i * i) % 2 != 0)
    continue;
    printf("%d\n", i * i);
  }
  return 0;
}



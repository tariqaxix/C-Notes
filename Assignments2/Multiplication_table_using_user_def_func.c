
#include <stdio.h>
int multiplication(int num);
main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  printf("The multiplication table of %d is \n\n", num);
  multiplication(num);
}
int multiplication(int num)
{
  for (int i = 1; i <= 10; i++)
  {
    printf("%d x %d = %d\n", num, i, i * num);
  }
  return 0;
}



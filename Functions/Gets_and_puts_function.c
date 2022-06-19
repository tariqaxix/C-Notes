
#include <stdio.h>
void main()
{
  char str[20];
  printf("Enter the string: ");
  fgets(str, 20, stdin);
  printf("\nYou entered: ");
  puts(str);
}




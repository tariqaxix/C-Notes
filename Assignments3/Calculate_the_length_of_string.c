
#include <stdio.h>
#include <string.h>
int main()
{
  char s[1000];
  int i, len;
  printf("Enter a string : ");
  scanf("%[^\n]", s);
  len = strlen(s);
  printf("Length of string is %d", len);
  return 0;
}



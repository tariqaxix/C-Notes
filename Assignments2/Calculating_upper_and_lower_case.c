
#include <stdio.h>
int main()
{
  char str[100];
  int countL, countU;
  int counter;
  countL = countU = 0;
  printf("Enter a string: ");
  gets(str);
  for (counter = 0; str[counter] != NULL; counter++)
  {
    if (str[counter] >= 'A' && str[counter] <= 'Z')
    countU++;
    else if (str[counter] >= 'a' && str[counter] <= 'z')
    countL++;
  }
  printf("The total uppercase characters are %d and the total lowercase characters are %d\n", countU, countL);
  return 0;
}



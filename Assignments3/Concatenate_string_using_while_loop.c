
#include <stdio.h>
// MAximum string size
#define MAX_SIZE 100
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE];
  int i, j;
  // Input two strings from the user
  printf("Enter the first string : ");
  fgets(str1, MAX_SIZE, stdin);
  printf("Enter the second string : ");
  fgets(str2, MAX_SIZE, stdin);
  // Move till the end of string
  i = 0;
  while (str1[i] != '\0')
  {
    i++;
  }
  // Copy str2 to str1
  j = 0;
  while (str2[j] != '\0')
  {
    str1[i] = str2[j];
    i++;
    j++;
  }
  // Make sure that the str1 is NULL terminated
  str1[i] = '\0';
  printf("Concatenated string is %s", str1);
  return 0;
}





#include <stdio.h>
#include <string.h>
// Maximum size of the string
#define MAX_SIZE 100
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE];
  // Input two strings from the user
  printf("Enter the first string : ");
  fgets(str1, MAX_SIZE, stdin);
  printf("Enter the second string : ");
  fgets(str2, MAX_SIZE, stdin);
  // Concatenate str1 with str2
  strcat(str1, str2);
  printf("Concatenated string is %s", str1);
  return 0;
}



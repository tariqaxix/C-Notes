
#include <stdio.h>
#include <string.h>
// Maximum string size
#define MAX_SIZE 100
int main()
{
  char str1[MAX_SIZE], str2[MAX_SIZE];
  int res;
  // Read two strings from the user
  printf("Enter the first string : ");
  fgets(str1, MAX_SIZE, stdin);
  printf("Enter the second string : ");
  fgets(str2, MAX_SIZE, stdin);
  // Call strcmp() to compare both strings and store the result in res
  res = strcmp(str1, str2);
  if (res == 0)
  {
    printf("Both strings are equall.");
  }
  else if (res == -1)
  {
    printf("First string is lexicographically smaller than second.");
  }
  else 
  {
    printf("First string is lexicographically greater than second.");
  }
  return 0;
}



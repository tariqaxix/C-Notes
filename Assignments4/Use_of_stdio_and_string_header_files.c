
#include <stdio.h>
#include <string.h>
// Maximum size of string 
#define MAX_SIZE 100
int main()
{
  char text1[MAX_SIZE], text2[MAX_SIZE];
  // Input original string from the user
  printf("Enter any string : ");
  fgets(text1, MAX_SIZE, stdin);
  // Copy text1 to text2 using strcpy()
  strcpy(text2, text1);
  printf("First string is %s\n", text1);
  printf("Second string is %s\n", text2);
  return 0;
}



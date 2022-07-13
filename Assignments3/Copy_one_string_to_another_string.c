
#include <stdio.h>
// Maximum size of the string
#define MAX_SIZE 100
int main()
{
  char text1[MAX_SIZE];
  char text2[MAX_SIZE];
  int i;
  // Input string from user
  printf("Enter any string: ");
  fgets(text1, MAX_SIZE, stdin);
  // Copy text1 to text2 character by character
  for (i = 0; text1[i] != '\0'; i++)
  {
    text2[i] = text1[i];
  }
  // Make sure that the string is NULL terminated
  text2[i] = '\0';
  printf("First string = %s\n", text1);
  printf("Second string = %s\n", text2);
  printf("Total characters copied = %d\n", i);
  return 0;
}



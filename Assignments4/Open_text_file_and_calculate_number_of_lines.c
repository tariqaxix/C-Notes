
#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  int linesCount = 0;
  // Open file in a read mode
  fp = fopen("C:\\test.txt", "r");
  if (fp == NULL)
  {
    printf("File \"%s\" does not exist!!!\n", "test.txt");
    return -1;
  }
  // Read character by character and check for new line
  while ((ch =fgetc(fp)) != EOF)
  {
    if (ch == '\n')
      linesCount++;
  }
  // Close the file
  fclose(fp);
  // Print the number of lines
  printf("Total number of lines are %d\n", linesCount);
  return 0;
}




#include <stdio.h>
#include <stdlib.h>
int main()
{
  // File pointer
  FILE *fp;
  char fName[20];
  printf(" Enter the file name to be craete :");
  scanf("%s", fName);
  // Creating (open) a file, in "w" write mode 
  fp = fopen(fName, "w");
  // Check whether file created or not
  if (fp == NULL)
  {
    printf("The file does not created!!!");
    // Exit from a programm
    exit(0);
  }
  printf("File created successfully.");
  return 0;
}



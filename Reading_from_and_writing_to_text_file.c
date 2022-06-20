
#include <stdio.h>
int main()
{
  int num;
  FILE *fptr;
  fptr = fopen("C:\\program.txt", "w");
  if(fptr == NULL)
  {
    printf("Error!");
    exit(1);
  }
  printf("Enter the number: ");
  scanf("%d", &num);
  fprintf(fptr, "%d", num);
  fclose(fptr);
  return 0;
}



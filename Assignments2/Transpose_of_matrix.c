
#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10
int main()
{
  int matrix[MAXROW][MAXCOL];
  int i, j, r, c;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of coloumns: ");
  scanf("%d", &c);
  printf("\n Enter the matrix elements: \n");
  for(i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("Enter element [%d, %d] : ", i+1, j+1);
      scanf("%d", &matrix[i][j]);
    }
  }
  // Transpose of matrix
  printf("\nTranspose matrix is :\n");
  for ( i = 0; i < c; i++)
  {
    for (j = 0; j < r; j++)
    {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}



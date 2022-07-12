
#include <stdio.h>
#define ROW 3
#define COLS 3
// Functio declaration to input and print 2d arrays
void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);
int main()
{
  int matrix[ROW][COLS];
  int i, j;
  // Input elements in matrix
  printf("Enter elements in %dx%d matrix. \n", ROW, COLS);
  inputMatrix(matrix, ROW, COLS);
  // Print elements in matrix
  printf("Elements of %dx%d matrix.\n", ROW, COLS);
  printMatrix(matrix, ROW, COLS);
  return 0;
}
void inputMatrix(int matrix[][COLS], int rows, int cols)
{
  int i, j;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      // (*(matrix + i) + j is equivalent to &matrix[i][j])
      scanf("%d", (*(matrix + i) + j));
    }
  }
}
void printMatrix(int (*matrix)[COLS], int rows, int cols)
{
  int i, j;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      // *(*(matrix + i) + j is equivalent to matrix[i][j])
      printf("%d ", *(*(matrix + i) + j));
    }
    printf("\n");
  }
}



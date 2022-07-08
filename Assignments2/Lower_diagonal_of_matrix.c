
#include <stdio.h>
#define ROW 3
#define COL 3
int main()
{
  int matrix[ROW][COL] = {{2,3,4}, {4,5,6}, {6,7,8}};
  printf("Lower Triangular Matrix\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i >= j)
      printf("%d\t", matrix[i][j]);

      else
      printf("%d", 0);
    }
    printf("\n");
  }
  return 0;
}




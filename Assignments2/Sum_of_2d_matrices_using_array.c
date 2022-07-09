
#include <stdio.h>
int main()
{
  float a[2][2], b[2][2], result[2][2];
  // Taking input using nested for loop
  printf("Enter the elements of first matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter a%d%d: ", i+1, j+1);
      scanf("%f", &a[i][j]);
    }
    // Taking input using nested for loop
  printf("Enter the elements of second matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter b%d%d: ", i+1, j+1);
      scanf("%f", &b[i][j]);
    }
    // Adding corresponding elements of 2 arrays
    for (int i = 0; i < 2; ++i)
      for (int j = 0; j < 2; ++j)
      {
        result[i][j] = a[i][j] + b[i][j];
      }
    // Displaying the sum
    printf("\nThe sum of matrix:\n");
    for (int i = 0; i < 2; ++i)
      for (int j = 0; j < 2; ++j)
      {
        printf("%.1f\t", result[i][j]);
        if (j == 1)
        {
          printf("\n");
        }
      }
      return 0;
}



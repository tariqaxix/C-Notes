
#include <stdio.h>
void main()
{
  int i, n, a[100];
  printf("\n\nRead the number of values in an array and display them in reverse order: \n");
  printf("---------------------------------------------------------------------------\n");
  printf("Input the number of elements to be stored in an array: ");
  scanf("%d", &n);
  printf("Input %d number of element in the array :\n", n);
  for (i = 0; i < n; i++)
  {
    printf("Element - %d : ", i);
    scanf("%d", &a[i]);
  }
  printf("\nThe values stored in the array are: \n");
  for (i = 0; i < n; i++)
  {
    printf("% 5d", a[i]);
  }
  printf("\n\nThe values stored in the array in reverse are :\n");
  for (i = n -1; i >= 0; i--)
  {
    printf("% 5d", a[i]);
  }
  printf("\n\n");
}



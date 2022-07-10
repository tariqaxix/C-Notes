
#include <stdio.h>
void main()
{
  int arr1[100];
  int n, i, j, tmp;
  printf("\n\nSort element of array in ascending order: \n");
  printf("----------------------------------------------\n");
  printf("Input the size of array : ");
  scanf("%d", &n);
  printf("Input %d elements in the array :\n", n);
  for (i = 0; i < n; i++)
  {
    printf("Element - %d : ", i);
    scanf("%d", &arr1[i]);
  }
  for (i = 0; i < n; i++)
  {
    for (j = i+1; j < n; j++)
    {
      if(arr1[j] < arr1[i])
      {
        tmp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = tmp;
      }
    }
  }
  printf("\nElement of array in sorted ascending order: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", arr1[i]);
  }
  printf("\n\n");
}




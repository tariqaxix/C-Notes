
#include <stdio.h>
void main()
{
  int arr1[100], arr2[100];
  int i, n;
  printf("\n\nCopy the elements of one array into other :\n");
  printf("------------------------------------------------\n");
  printf("Enter the number of elements to be stored in an array: ");
  scanf("%d", &n);
  printf("Input %d elements in the array :\n", n);
  for (i = 0; i < n; i++)
  {
    printf("Element - %d : ", i);
    scanf("%d", &arr1[i]);
  }
  // Copy element of first array into other
  for (i = 0; i < n; i++)
  {
    arr2[i] = arr1[i];
  }
  // Print the elements of first array
  printf("\nThe element stored in the first array are :\n");
  for (i = 0; i < n; i++)
  {
    printf("% 5d", arr1[i]);
  }
  // print the elements copied into the second array
  printf("\n\n The elements copied into the second array are :\n");
  for (i = 0; i < n; i++)
  {
    printf("% 5d", arr2[i]);
  }
  printf("\n\n");
}



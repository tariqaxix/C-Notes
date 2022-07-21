
#include <stdio.h>
#define MAX 10
int main()
{
  int arr1[MAX];
  int arr2[MAX];
  printf("Maximum element of the array is %d\n", MAX);
  printf("Size of array1 is %d\n", sizeof(arr1));
  printf("Size of array2 is %d\n", sizeof(arr2));
  printf("Total elements of arr1 are %d\n", sizeof(arr1) / sizeof(int));
  printf("Total elements of arr2 are %d\n", sizeof(arr2) / sizeof(int));
  return 0;
}



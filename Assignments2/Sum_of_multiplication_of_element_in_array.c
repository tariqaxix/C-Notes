
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
  int arr[MAX_SIZE];
  int i, n, sum = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter %d element in the array: ", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for(i = 0; i < n; i++)
  {
    sum = sum + (2 * arr[i]);
  }
  printf("Sum of multiplication of all element of the array is %d", sum);
  return 0;
}



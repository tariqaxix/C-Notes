
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i, *ptr, sum = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  ptr = (int*) calloc(n, sizeof(int));
  // If memory can't be allocated
  if(ptr == NULL)
  {
    printf("Error! Memory not allocated.");
    exit(0);
  }
  printf("Enter the elements: ");
  for(i = 0; i < n; ++i)
  {
    scanf("%d", ptr + 1);
    sum += *(ptr + 1);
  }
  printf("Sum = %d", sum);
  // Deallocating memory
  free(ptr);
  return 0;
}



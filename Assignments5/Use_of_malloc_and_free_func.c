
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i, *ptr, sum = 0;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  ptr = (int*) malloc(n * sizeof(int));
  // If memory can't be allocated
  if (ptr == NULL)
  {
    printf("Error! memory not allocated.");
    exit(0);
  }
  printf("Enter elements : ");
  for (i = 0; i < n; ++i)
  {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }
  printf("Sum is %d", sum);
  // Deallocating the memory
  free(ptr);
  return 0;
}



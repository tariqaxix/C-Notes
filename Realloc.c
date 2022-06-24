
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr, i, n1, n2;
  printf("Enter the size: ");
  scanf("%d", &n1);
  ptr = (int*) malloc(n1 * sizeof(int));
  printf("Adress of previously allocated memory: ");
  for(i = 0; i < n1; ++i) 
    printf("%u\n", ptr + i);
  printf("\nEnter the new size: ");
  scanf("%d", &n2);
  // Reallocating the memory
  ptr = realloc(ptr, n2 * sizeof(int));
  printf("Adresses of newly allocated memory: ");
  for(i = 0; i < n2; ++i) 
    printf("%u\n", ptr + i);
  free(ptr);
  return 0;
}



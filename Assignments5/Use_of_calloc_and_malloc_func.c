
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *arr;
  // malloc() allocated the memory for 5 integers containing garbage values
  // 5*4 bytes = 20 bytes
  arr = (int *)malloc(5 * sizeof(int)); 
  // Deallocating the memory previously allocated by malloc() function
  free(arr);
  // calloc() allocates the memory for 5 integers and set 0 to all of them
  arr = (int *)calloc(5, sizeof(int));
  // Deallocating the memory previously allocated by calloc() function
  free(arr);
  return(0);
}



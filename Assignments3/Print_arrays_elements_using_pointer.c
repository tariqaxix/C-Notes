
#include <stdio.h>
int main()
{
  // Declare an integer array
  int arr[10];
  // Declare an integer pointer
  int *pa;
  int i;
  // Assign base adress of array
  pa = &arr[0];
  printf("Enter arrays elements:\n");
  for (i = 0; i < 10; i++)
  {
    printf("Enter elements %02d: ", i + 1);
    // Reading through pointers
    scanf("%d", pa + i);
  }
  printf("\nEntered arrays elements are:");
  printf("\nAdress\t\tValue\n");
  for (i = 0; i < 10; i++)
  {
    printf("%08X\t%03d\n", (pa + i), *(pa + i));
  }
  return 0;
}




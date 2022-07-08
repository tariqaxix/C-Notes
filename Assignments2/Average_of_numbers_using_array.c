
#include <stdio.h>
int main()
{
  int marks[10], i, n, sum = 0, average;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  for (i = 0; i < n; ++i)
  {
    printf("Enter the number%d: ",i + 1);
    scanf("%d", &marks[i]);
    // Adding integers entered by user to sum variable 
    sum += marks[i];
  }
  average = sum / n;
  printf("The average is %d", average);
  return 0;
}




#include <stdio.h>
int main()
{
  const int maxInput = 5;
  int i;
  double number, average, sum = 0.0;
  for (i = 1; i <= maxInput; ++i) 
  {
    printf("%d. Enter a number: ");
    scanf("%lf", &number);
    if (number < 0.0)
    goto jump;
    sum += number;
  }
  jump:
  average = sum / (i - 1);
  printf("Sum is %.2f\n", sum);
  printf("Average is %.2f\n", average);
  return 0;
}



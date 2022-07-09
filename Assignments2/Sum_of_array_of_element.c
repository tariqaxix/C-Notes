
#include <stdio.h>
float calculateSum(float age[]);
int main()
{
  float result, age[] = {23.4, 45, 65.2, 6, 7.6, 9};
  // Age array is to be passed to calculateSum
  result = calculateSum(age);
  printf("Result is %.2f", result);
  return 0;
}
float calculateSum(float age[])
{
  float sum = 0.0;
  for (int i = 0; i < 6; ++i)
  {
    sum += age[i];
  }
  return sum;
}



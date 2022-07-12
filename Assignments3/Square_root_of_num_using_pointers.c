
#include <stdio.h>
#include <math.h>
void squareRoot(float num1, float *squareRoot)
{
  *squareRoot = sqrt(num1);
}
int main(void)
{
  float n1, squareRootResult;
  printf("Enter a number: ");
  scanf("%f", &n1);
  squareRoot(n1, &squareRootResult);
  printf("The squareroot of the entered number is %f", squareRootResult);
  return 0;
}



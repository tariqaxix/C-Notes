
#include <stdio.h>
int main()
{
  float P, T, R, RES;
  printf("Enter the value of P: ");
  scanf("%f", &P);
  printf("Enter the value of T: ");
  scanf("%f", &T);
  printf("Enter the value of R: ");
  scanf("%f", &R);
  RES = (P * R * T) /100;
  printf("The result is %f\n", RES);
  return 0;
}



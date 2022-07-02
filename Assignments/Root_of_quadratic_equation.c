
#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c;
  float root1, root2, imaginary;
  float discriminant;
  printf("Enter the values of a, b, and c of quadrtaic equation (ax^2 + bX + c) : ");
  scanf("%f%f%f", &a, &b, &c);
  discriminant = ( b * b) - (4 * a * c);
  switch (discriminant > 0)
  {
  case 1:
  // If discriminant is positive
  root1 = (-b + sqrt(discriminant)) / 2 * a;
  root1 = (-b - sqrt(discriminant)) / 2 * a;
  printf("The two real distinct roots are %.2f and %.2f", root1, root2);
    break;
  // If discriminant is zero
  case 0:
  root1 = root2 = -b / (2 * a);
  printf("The two real and equal roots are %.2f and %.2f", root1, root2);
  break;
  }
  return 0;
}



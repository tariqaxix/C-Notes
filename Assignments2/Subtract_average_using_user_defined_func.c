
#include <stdio.h>
// Function declaration
int subtractTwoNum(int, int);
float averageTwoNum(int, int);
int main()
{
  int number1, number2;
  int sub;
  int avg;
  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);
  sub = subtractTwoNum(number1, number2);
  avg = averageTwoNum(number1, number2);
  printf("Number1: %d, Number2: %d\n", number1, number2);
  printf("Difference is %d and averag is %d", sub, avg);
  return 0;
}
// Function deifinition
int subtractTwoNum(int x, int y)
{
  int sub;
  sub = x - y;
  return sub;
}
float averageTwoNum(int x, int y)
{
  float average;
  return ((float)(x) + (float)(y)) / 2;
}



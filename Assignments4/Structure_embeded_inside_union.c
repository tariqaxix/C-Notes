
#include <stdio.h>
int main()
{
  struct student
  {
    char name[30];
    int rollNo;
    float percentage;
  };
  union details
  {
    struct student s1;
  };
  union details set;
  printf("Enter details :");
  printf("\n Enter name :");
  scanf("%s", set.s1.name);
  printf("\nEnter Roll number :");
  scanf("%d", &set.s1.rollNo);
  printf("Enter percentage :");
  scanf("%f", &set.s1.percentage);
  printf("\nThe students details are : \n");
  printf("\nName : %s", set.s1.name);
  printf("\nRollNo : %d", set.s1.rollNo);
  printf("\nPercentage is %f", set.s1.percentage);
  return 0;
}



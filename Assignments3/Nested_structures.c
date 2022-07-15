
#include <stdio.h>
struct student 
{
  char name[30];
  int rollNo;
  struct dateOfBirth
  {
    int dd;
    int mm;
    int yy;
  } DOB;     
  // Created structure variable DOB
};
int main()
{
  struct student std;
  printf("Enter the name : ");
  fgets(std.name, 30, stdin);
  printf("Enter the roll number : ");
  scanf("%d", &std.rollNo);
  printf("Enter Date Of Birth [DD MM YY] format :");
  scanf("%d%d%d", &std.DOB.dd, &std.DOB.mm, &std.DOB.yy);
  printf("\nName : %s \nRollNo : %d \nDate of Birth : %02d/%02d/%02d\n", std.name, std.rollNo, std.DOB.dd, std.DOB.mm, std.DOB.yy);
  return 0;
}



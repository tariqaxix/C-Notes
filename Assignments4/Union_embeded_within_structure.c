
#include <stdio.h>
struct student
{
  union 
  {
    // Anonymous union (unnamed union)
    char name[10];
    int roll;
  };
  int marks;
};
int main()
{
  struct student stud;
  char choice;
  printf("\n You can enter name or roll number : \n");
  printf("Do you want to enter the name (y or n) : ");
  scanf("%c", &choice);
  if (choice == 'y' || choice == 'Y')
  {
    printf("\n Enter name : ");
    scanf("%s", stud.name);
    printf("\n Name : %s", stud.name);
  }
  else 
  {
    printf("\n Enter the Roll number : ");
    scanf("%d", &stud.roll);
    printf("\n Roll : %d", stud.roll);
  }
  printf("\n Enter the marks :");
  scanf("%d", &stud.marks);
  printf("\n Marks : %d", stud.marks);
  return 0;
}



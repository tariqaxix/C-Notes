
#include <stdio.h>
struct student 
{
  char name[50];
  int age;
};
// Function declaration
struct student getInformation();
int main()
{
  struct student s;
  s = getInformation();
  printf("\n Displaying information\n");
  printf("Name : %s", s.name);
  printf("\n Age : %d", s.age);
  return 0;
}
struct student getInformation()
{
  struct student s1;
  printf("Enter the name: ");
  scanf("%[^\n]%*c", s1.name);
  printf("Enter the age: ");
  scanf("%d", &s1.age);
  return s1;
}



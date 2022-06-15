
#include <stdio.h>
struct student 
{
  char name[50];
  int age;
};
// Function declaration
void display(struct student s);
int main()
{
  struct student s1;
  printf("Enter the name: ");
  scanf("%[^\n]%*c", s1.name);
  printf("Enter the age: ");
  scanf("%d", &s1.age);
  // Passing struct as an argument 
  display(s1);
  return 0;
}
void display(struct student s)
{
  printf("\nDisplaying information\n");
  printf("Name: %s", s.name);
  printf("\nAge: %d", s.age);
}



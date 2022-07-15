
#include <stdio.h>
struct student
{
  char name[50];
  int roll;
  float marks;
} s;
int main()
{
  printf("Enter the information :\n");
  printf("Enter the name : ");
  scanf("%s", s.name);
  printf("Enter the Roll number : ");
  scanf("%d", &s.roll);
  printf("Enter the marks : ");
  scanf("%f", &s.marks);
  printf("Dislplaying Information : \n");
  printf("Name : ");
  puts(s.name);
  printf("Roll number : %d\n", s.roll);
  printf("Marks : %.1f\n", s.marks);
  return 0;
}



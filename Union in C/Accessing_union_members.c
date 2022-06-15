

#include <stdio.h>
union Job 
{
  float salary;
  int workerNo;
} j;
int main()
{
  j.salary = 50.6;
  printf("Salary = %.1f\n", j.salary);
  j.workerNo = 33;
  printf("Number of worker is = %d", j.workerNo);
  return 0;
}






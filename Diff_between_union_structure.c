
#include <stdio.h>
// Defining Union
union unionJob 
{
  char name[32];
  float salary;
  int workerNo;
} uJob;
// Defining structure
struct structJob 
{
  char name[32];
  float salary;
  int workerNo;
  } sJob;
  int main()
  {
    printf("The size of union is %d bytes", sizeof(uJob));
    printf("\nSize of structure is %d bytes", sizeof(sJob));
    return 0;
  }



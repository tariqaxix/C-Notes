
#include <stdio.h>
void swap(int *, int *);
int main()
{
  int n1, n2;
  printf("\n\nFunction : swap two numbers using function :\n");
  printf("-------------------------------------------------\n");
  printf("Enter the first number: ");
  scanf("%d", &n1);
  printf("Enter the second number: ");
  scanf("%d", &n2);
  printf("Before swapping : n1 = %d and n2 = %d\n", n1, n2);
  // Pass adress of both variables to function
  swap(&n1, &n2);
  printf("\nAfter swapping : n1 = %d and n2 = %d\n", n1, n2);
  return 0;
}
void swap(int *p, int *q)
{
  int tmp;
  tmp = *p;
  *p = *q;
  *q = tmp;
}



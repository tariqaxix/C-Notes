
#include <stdio.h>
#define message_for(a, b) \
printf(#a " and " #b " are students!\n ")
int main(void)
{
  message_for(Tariq, John);
  return 0;
}



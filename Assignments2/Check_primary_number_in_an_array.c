
#include <stdio.h>
// Function to check number is prime or not
// Function will return 1 if number is prime
int isPrime(int num)
{
  // Loop counter
  int i;  
  // It will be 1 when number is not prime
  int flag = 0;
  // Loop to check whether number is prime or not
  // We will check whether number is divisible
  // By any number form 2 to number/2, then it
  // will not be prime
  for (i = 2; i < num/2; i++)
  {
    if (num % i == 0)
    {
      flag = 1;
      break;
    }
  }
  // Flag is 1, if number is not prime
  if (flag == 1)
  {
    return 0;
  }
  else 
  {
    return 1;
  }
}
int main()
{
  // Loop counter
  int loop;
  // Declaring array with prime and not prime number
  int arr[] = {3, 5, 650, 54, 23, 89, 4, 8};
  // Calculate length of an array
  int len = sizeof(arr) / sizeof(arr[0]);
  // Print array element with message
  // "Prime" or "Not prime"
  for (loop = 0; loop < len; loop++)
  {
    printf("%3d - %s\n", arr[loop], (isPrime(arr[loop])? "prime":"not prime"));
  }
  printf("\n");
  return 0;
}



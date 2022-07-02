
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  // To check whether alphabet or not
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
  {
    switch(ch) 
    {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      printf("%c is a vowel\n", ch);
      break;
      default:
      printf("%c is a consonant\n", ch);
      break;
    }
  }
  else 
  {
    printf("%c is not an alphabet\n", ch);
  }
  return 0;
}



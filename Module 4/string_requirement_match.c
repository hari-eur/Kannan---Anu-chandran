/*1.Write a program to handle strings
    i) Get string as input and store it in array 
    ii) Check string if it is 8 character length, contains atleast one lowercase and uppercase,one number and one special character with and without string functions/char lib functions.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
  char str[100];
  int i, len, upper, lower, digit, special;
  printf("\nEnter a string: ");
  fgets(str, 100, stdin);
  while(str[i]!='\0')
  {
    len++;
    i++;
  }
  if (str[len-1] == '\n') 
  {
    str[len-1] = '\0';
  }
  if (strlen(str) != 8) 
  {
    printf("\nLength of the String should be 8!!!\n");
    return 0;
  }
for (i=0;i<len;i++) 
  {
    if (str[i] >='A' && str[i]<='Z')
    {
      upper = 1;
    } 
    else if (str[i] >='a' && str[i]<='z')
    {
      lower = 1;
    } 
    else if (str[i] >='0' && str[i]<='9')
    {
      digit = 1;
    } 
    else 
    {
      special = 1;
    }
  }

  if (upper && lower && digit && special) 
  {
    printf("\nThe entered string matches the requirements\n");
  } 
  else
   {
    printf("\nThe entered string does not matche to the requirements\n");
  }
  return 0;
}

/*Output:
Enter a string: ABCd@123

The entered string matches the requirements
*/

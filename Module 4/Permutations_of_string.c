/*3.Write a program to Check string if it is 8 character length, contains atleast one lowercase and uppercase,one number,one special character and possible permutations using pointers*/
#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutations(char *str, int l, int r) 
{
    if (l == r) 
    {
        printf("%s\n", str);
    } else 
    {
        for (int i = l; i <= r; i++) 
        {
            swap((str+l), (str+i));
            permutations(str, l+1, r);
            swap((str+l), (str+i));
        }
    }
}
int main() {
    char str[9];
    printf("Enter a string of 8 character length: ");
    scanf("%s", str);
    if (strlen(str) != 8) 
    {
        printf("String must be  8 characters long only.\n");
        return 0;
    }
    int upper = 0, lower = 0, digit = 0, special = 0;
    for (int i = 0; i < 8; i++)
     {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            upper = 1;
        } else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            lower = 1;
        } else if (str[i] >= '0' && str[i] <= '9') 
        {
            digit = 1;
        } else
         {
            special = 1;
        }
    }
    if (!upper || !lower || !digit || !special) 
    {
        printf("String must contain at least one uppercase letter, one lowercase letter, one digit, and one special character.\n");
        return 0;
    }
    printf("Permutations of the string:\n");
    permutations(str, 0, 7);    
    return 0;
}

/*Output:
Enter a string of 8 character length: Abcdefg1
String must contain at least one uppercase letter, one lowercase letter, one digit, and one special character.

*/

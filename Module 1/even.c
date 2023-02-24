// To check a number whether its a even number or not

#include<stdio.h>  // Including the header files
int main()  // main() is from where the program execution starts
{
    int number;
    printf("\nEnter a number to be checked whether odd or even: ");
    scanf("%d",&number);  // The value of the number is received from the user
    if(number%2==0)  // condition to be checked for even number
    {
        printf("\nThe Number %d is a even number",number);
    }
    else
    {
        printf("\nThe Number %d is an odd number",number);
    }
    return 0;  // Termination of the program
}



/* The Output

Enter a number to be checked whether odd or even: 45

The Number 45 is an odd number

*/

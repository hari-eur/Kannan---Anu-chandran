/*2. Write a program to print full, inverted, half pyramid(rows = 7) using while and for loop(nested)*/

#include <stdio.h>
int main()
 {
    int row, column;
    printf("Full Pyramid\n\n");
    row = 1;
    while(row<=7) 
    {
        for (column=1;column<=7-row;column++)
        {
            printf(" ");
        }
        for (column=1;column<=2*row-1;column++) 
        {
            printf("*");
        }
        printf("\n");
        row++;
    }
    printf("\n\nInverted Pyramid\n\n");
    row = 7;
    while(row>=1) {
        for (column=1;column<=7-row;column++)
        {
            printf(" ");
        }
        for (column=1;column<=2*row-1;column++) 
        {
            printf("*");
        }
        printf("\n");
        row--;
    }
    printf("\n\nHalf Pyramid\n\n");
    for (row=1;row<=7;row++) 
    {
        for (column=1;column<=row;column++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



/*Output:
Full Pyramid

      *
     ***
    *****
   *******
  *********
 ***********
*************


Inverted Pyramid

*************
 ***********
  *********
   *******
    *****
     ***
      *


Half Pyramid

*
**
***
****
*****
******
*******

*/

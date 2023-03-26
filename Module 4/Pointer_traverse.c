/* 2.Create a fixed array and use pointers to transverse through elements and print the output.*/

#include <stdio.h>
int main() 
{
   int arr[5] = {10,20,30,40,50}; 
   int i=0;
   int *ptr = arr; 
   printf("\nTraversing the array using pointers:  \n");
   for(i=0;i<5;i++) 
   {
      printf("%d \t", *ptr); 
      ptr++; 
   }
   return 0;
}

/*Output:
Traversing the array using pointers:  
10      20      30      40      50 
*/

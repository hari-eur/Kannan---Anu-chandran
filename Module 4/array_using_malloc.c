/*4.Write a C program that dynamically allocates an array of integers using either malloc or calloc, populates it with values entered by the user, and then calculates and prints the sum of all the values in the array. The program should then use the free function to deallocate the memory used by the array*/

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *arr;
    int size, i, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int*) malloc(size * sizeof(int)); 
    printf("Enter %d integers:\n", size);
    for(i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]); 
        sum += arr[i]; 
    }
    printf("The sum of all values in the array is %d\n", sum);
    free(arr); 
    return 0;
}

/*Output:
Enter the size of the array: 5
Enter 5 integers:
1 2 3 4 5
The sum of all values in the array is 15
*/

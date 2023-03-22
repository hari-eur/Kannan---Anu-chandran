/*2. Write the program for following 
Input:
n -> Size of matrix will always be odd number
m -> Element to be found
Output:
Replace all the occurance of m with number above it  except the elements in first row.
Sample 1:
Input:
n=3
m=8

Array:
1 2 3
8 5 6
7 8 9

Output:
1 2 3
1 5 6
7 5 9 

Sample 2:
Input:
n=5
m=7

Array:
1 2 7 7 5
6 7 7 4 1
2 3 5 6 7
1 7 6 3 9
3 9 2 1 5

Output:
1 2 7 7 5
6 2 7 4 1
2 3 5 6 1
1 3 6 3 9
3 9 2 1 5*/


#include <stdio.h>
int main()
{
    int a[100][100],i,j,n,size;
    printf("\nEnter the number of rows and columns ");
    scanf("%d",&size);
    if(size%2==0)
    {
        printf("\nNot valid");
    }
    else
    {
    printf("\nIt is a Valid Matrix");
    printf("\nEnter the number to be searched :");
    scanf("%d",&n);
    printf("\nEnter the values of the array:\n");
    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe  array is :\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i][j]==n)
            {
                if(i>0)
                {
                a[i][j]=a[i-1][j];
                }
            }
        }
    }
    printf("\nThe new array is : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
    
}


/*
Output:
Enter the number of rows and columns 3

It is a Valid Matrix
Enter the number to be searched :5

Enter the values of the array:
1
2
5
8
9
4
5
5
5

The  array is :
1       2       5
8       9       4
5       5       5

The new array is : 
1       2       5
8       9       4
8       9       4

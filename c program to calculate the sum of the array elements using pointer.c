// This C Program calculates the sum of array elements using pointer.
/*
    C program to read N integers and store them in an array A.
    Find the sum of all these elements using pointer.
*/
/// 


#include <stdio.h>
#include <malloc.h>


int main ()
{
    int i, n, sum = 0;
    int *a;

    printf ("Enter the size of array A \n");
    scanf ("%d", &n);

    int array[n];
    a=&array[0]; //we can also use (a=array) or (a=&array) because array name is also treated as base address of array
    
    printf ("Enter Elements of array \n");
    for (i = 0; i < n; i++)
    {
       scanf ("%d", a + i);
    }

    /*  Compute the sum of all elements in the given array */
    for (i = 0; i < n; i++)
    {
        sum = sum + *(a + i);
    }

    printf ("Sum of all elements in array = %d\n", sum);
    
    return 0; 

}

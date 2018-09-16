//This program will declare an array and then add all the array elements and finds the average of the array

    /*
       C program to read N integers into an array  and
       a) Find the sum of negative numbers
       b) Find the sum of positive numbers
       c) Find the average of all numbers
     */


#include  <stdio.h>

int main ()
{
    int i, size, negative_sum = 0, positive_sum = 0;
    float total = 0.0, average;

    printf ("Enter the size of Array \n");
    scanf ("%d", &size);

    int array[size];

    for (i = 0; i < size; i++)
    {
        scanf ("%d", &array[i]);
    }

    printf ("Input array elements \n");

    for (i = 0; i < size; i++)
    {
        printf ("%+3d\n", array[i]);
    }

    /*  Addition starts */

    for (i = 0; i < size; i++)
    {

        if (array[i] < 0)
	    {
	        negative_sum = negative_sum + array[i];
	    }
        else if (array[i] > 0)
	    {
	        positive_sum = positive_sum + array[i];
	    }
        else if (array[i] == 0)
	    { 
	        
	    }
        total = total + array[i];

    }

    average = total / size;

    printf ("\n Sum of all negative numbers =  %d\n", negative_sum);

    printf ("Sum of all positive numbers =  %d\n", positive_sum);
 
    printf ("\n Average of all input numbers =  %.2f\n", average);
 
    return 0;

}

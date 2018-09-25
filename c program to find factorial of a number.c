/*
    The factorial of a positive integer n is equal to 1*2*3*...n. You will learn to calculate the factorial
    of a number using for loop in this example.
    
    The factorial of a positive number n is given by:
    factorial of n (n!) = 1*2*3*4....n
    
    The factorial of a negative number doesn't exist. And, the factorial of 0 is 1, 0! = 1

*/


#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    // show error if the user enters a negative integer
    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}

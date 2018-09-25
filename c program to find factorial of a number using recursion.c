/*
    The factorial of a positive number n is given by:
    factorial of n (n!) = 1*2*3*4....n

    The factorial of a negative number doesn't exist. And the factorial of 0 is 1.
*/



#include <stdio.h>

long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

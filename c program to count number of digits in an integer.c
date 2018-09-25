/*
    This program takes an integer from the user and calculates the number of digits.
    For example: If the user enters 2319, the output of the program will be 4.
*/



#include <stdio.h>

int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
    return 0;
}

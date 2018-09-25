/*
    Example to check whether an integer (entered by the user) is a prime number or not using for loop and
    if...else statement.
    
    A prime number is a positive integer which is divisible only by 1 and itself. For example: 2, 3, 5, 7, 11, 13 .
*/


#include <stdio.h>


int main()
{
    int n, i, flag = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
          
        else
          printf("%d is not a prime number.", n);
    }
    
    return 0;
}

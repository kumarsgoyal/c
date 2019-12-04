/*
    You are given N number of books. Every ith book has Pi number of pages. 
    You have to allocate books to M number of students. There can be many ways or permutations to do so.
    In each permutation one of the M students will be allocated the maximum number of pages.
    Out of all these permutations, the task is to find that particular permutation in which
    the maximum number of pages allocated to a student is minimum of those in all the other
    permutations, and print this minimum value. 

    Each book will be allocated to exactly one student. Each student has to be allocated atleast one book.

    Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order
    (see explanation for better understanding).

    Input:
    The first line contains 'T' denoting the number of testcases. Then follows description of T testcases:
    Each case begins with a single positive integer N denoting the number of books.
    The second line contains N space separated positive integers denoting the pages of each book.
    And the third line contains another integer M, denoting the number of students.


    Output:
    For each test case, output a single line containing minimum number of pages each student
    has to read for corresponding test case.

    Constraints:
    1<= T <= 100
    1 <= N <= 106
    1 <= A [ i ] <= 106
    1 <= M <= 106

    Example:
    Input:
    2
    4
    12 34 67 90
    2
    3
    15 17 20

    Output:
    113
    32

    Explaination: Allocation can be done in following ways:
    {12} and {34, 67, 90}     Maximum Pages = 191
    {12, 34} and {67, 90}     Maximum Pages = 157
    {12, 34, 67} and {90}        Maximum Pages = 113

    Therefore, the minimum of these cases is 113, which is selected as output

*/


#include <stdio.h>
#include <stdlib.h>
int func2(int *a, int n, unsigned long long mid)
{
    unsigned long long sum = 0, count = 1;
    int i;
    for(i = 0; i < n; i++)
    {
        if( ( sum + a[i] ) > mid ) 
        {
            count++;
            sum = a[i];
        }
        else
        {
            sum += a[i];
        }
    }
    return count;
}

int books(int* a, int size, int student) {
    if(student > size) {
        return -1;
    }
    
    unsigned long long sum = 0,max = 0, l = 0, h = 0, mid = 0, i;
    for(i = 0; i < size; i++)
    {
        sum += a[i];
        if(max < a[i])
        {
            max = a[i];
        }
    }
    l = max;
    h = sum;
    while(l <= h)
    {
        mid = ( l + h ) / 2;
        int conf = func2(a, size, mid);
        if(conf <= student)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return l;
    
}



int main() {
	int t = 0;
	scanf("%d", &t);
	
	while(t-- ) {
	    int size = 0;
	    scanf("%d", &size);
	    
	    int *a = (int *)calloc(sizeof(int), size);
	    
	    for(int i = 0; i < size; i++) {
	        scanf("%d", &a[i]);  
	    }
	    
	    int student = 0;
	    scanf("%d", &student);
	    printf("%d \n",books(a, size,student));
	    
	    
	}
	return 0;
}

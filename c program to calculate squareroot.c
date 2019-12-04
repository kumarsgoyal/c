// this question is solved using binary search logic

#include <stdio.h>

int func(int num) {
     // l - is lower limit
     // h - is higher limit
     
    
    long long int l = 0, h = num-1, result = -1, mid;
    
    if((num == 0) || (num == 1)) {
        return num;
    }
    
    
    while(l <= h) {
        
        mid = l + ((h - l) / 2);
        
        if((mid * mid) == num) {
            return mid;
        }
        else if((mid * mid) > num) {
            h = mid - 1; 
            
        }
        else if((mid * mid) < num) {
            result = mid;
            l = mid + 1;
            
        }
        
    }
    return result;
    
}


int main() {
	
  // no of test cases
	int t = 0;
	
	scanf("%d", &t);
	
  
	while(t--) {
	    
      // number whoose squareroot to be find
	    int num = 0;
	    
	    scanf("%d", &num);
	    
	    printf("%d\n", func(num));
	}
	
	return 0;
}
